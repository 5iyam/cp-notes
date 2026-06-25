#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int x;
        cin >> x;
        if(x % 3 == 0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }

    return 0;
}