#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a,b,c,n;
        cin >>a>>b>>c>>n;
        int d=a+b+c+n;
        if(d % 3 == 0){
            int target = d / 3;
            if(max({a,b,c}) <= target){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}