#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        int cnt=0;
        cin >> n;
       for(int j=1; ; j++){
        if(j % 3 == 0){
            continue;
        }
        else{
            cnt++;
            if(cnt <= n){
                cout<<j<<" ";
            }
            else{
                break;
            }
        }
       }
       cout<<endl;
    }
    return 0;
}
