#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

// Screen dimensions
const int WIDTH  = 40;
const int HEIGHT = 20;

// Car position
int carX = WIDTH / 2;
int carY = HEIGHT - 3;

// Enemy cars
struct Enemy {
    int x, y;
};

vector<Enemy> enemies;
int score = 0;
int speed = 100; // milliseconds delay
bool gameOver = false;

// Move cursor to position
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Hide cursor
void hideCursor(){
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorHandle(GetStdHandle(STD_OUTPUT_HANDLE), cursorInfo);
}

// Draw the game
void draw(){
    gotoxy(0, 0);

    for(int y = 0; y < HEIGHT; y++){
        for(int x = 0; x < WIDTH; x++){

            // Border
            if(x == 0 || x == WIDTH-1){
                cout << "|";
                continue;
            }

            // Player car
            if(x == carX && y == carY){
                cout << "A";
                continue;
            }

            // Enemy cars
            bool isEnemy = false;
            for(auto& e : enemies){
                if(e.x == x && e.y == y){
                    cout << "V";
                    isEnemy = true;
                    break;
                }
            }

            if(!isEnemy) cout << " ";
        }
        cout << "\n";
    }

    cout << "  Score: " << score << "  Speed: " << (1000/speed) << "x   \n";
    cout << "  Controls: A=Left  D=Right  Q=Quit\n";
}

// Spawn enemy
void spawnEnemy(){
    Enemy e;
    e.x = (rand() % (WIDTH - 2)) + 1;
    e.y = 1;
    enemies.push_back(e);
}

// Update enemies
void update(){
    // Move enemies down
    for(auto& e : enemies){
        e.y++;
    }

    // Check collision
    for(auto& e : enemies){
        if(e.x == carX && e.y == carY){
            gameOver = true;
            return;
        }
    }

    // Remove enemies that passed screen
    enemies.erase(
        remove_if(enemies.begin(), enemies.end(),
            [](Enemy& e){ return e.y >= HEIGHT; }),
        enemies.end()
    );

    // Increase score
    score++;

    // Increase speed every 10 points
    if(score % 10 == 0 && speed > 30){
        speed -= 5;
    }

    // Spawn new enemy randomly
    if(rand() % 3 == 0){
        spawnEnemy();
    }
}

// Handle input
void handleInput(){
    if(_kbhit()){
        char ch = _getch();
        if(ch == 'a' || ch == 'A'){
            if(carX > 1) carX--;
        }
        if(ch == 'd' || ch == 'D'){
            if(carX < WIDTH-2) carX++;
        }
        if(ch == 'q' || ch == 'Q'){
            gameOver = true;
        }
    }
}

int main(){
    srand(time(0));

    // Clear screen
    system("cls");

    cout << "\n\n";
    cout << "  ================================\n";
    cout << "       TERMINAL CAR RACING!       \n";
    cout << "  ================================\n\n";
    cout << "  Your car : A\n";
    cout << "  Enemy    : V\n\n";
    cout << "  Controls:\n";
    cout << "  A = Move Left\n";
    cout << "  D = Move Right\n";
    cout << "  Q = Quit\n\n";
    cout << "  Press any key to START!\n";

    _getch();
    system("cls");

    // Spawn first enemy
    spawnEnemy();

    while(!gameOver){
        draw();
        handleInput();
        update();
        Sleep(speed);
    }

    // Game over screen
    system("cls");
    cout << "\n\n";
    cout << "  ================================\n";
    cout << "           GAME OVER!             \n";
    cout << "  ================================\n\n";
    cout << "  Your Score : " << score << "\n\n";

    if(score < 20)
        cout << "  Keep practicing! 💪\n";
    else if(score < 50)
        cout << "  Good job! 🔥\n";
    else
        cout << "  Amazing! You are a pro! 🏆\n";

    cout << "\n  Press any key to exit...\n";
    _getch();

    return 0;
}
