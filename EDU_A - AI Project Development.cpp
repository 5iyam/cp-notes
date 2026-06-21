#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int n_1 = n, n_2 = n;
        int x, y, z;
        cin >> x >> y >> z;
        int mt_1 = 0, mt_2 = 0;
        
        if(n_1 % (x+y) == 0){
            mt_1 = n_1/(x+y);
        }
        else{
            mt_1 = (n_1/(x+y)) + 1;
        }

        n_2 = n_2 - z*x;

        if(n_2 % (x+10*y) == 0){
            mt_2 = (n_2 / (x+10*y)) + z;
        }
        else{
            mt_2 = (n_2 / (x+10*y)) + z + 1;
        }

        if(mt_1 == mt_2){
            cout<< mt_1 <<endl;
        }
        else if(mt_1 > mt_2){
            cout<<mt_2<<endl;
        }
        else if(mt_1 < mt_2){
            cout<<mt_1<<endl;
        }



    }

    return 0;
}