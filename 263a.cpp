#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5];
    int x,y;
    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            if(a[i][j] == 1){
                x=abs(i-2);
                y=abs(j-2);
                cout<<x+y<<endl;
                break;
            }
        }
        
    }
    
}