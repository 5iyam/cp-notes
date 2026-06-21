#include<bits/stdc++.h>
using namespace std;

int main(){
    int flag = 0;
    int n;
    cin >> n;
    start:
    for(int i=0; ; i++){
        if(pow(2,i) > n){
            flag+=1;
            n = n-pow(2,(i-1));
            if(n == 0){
                cout<<flag<<endl;
                return 0;
            }
            goto start;
        }
    }
}