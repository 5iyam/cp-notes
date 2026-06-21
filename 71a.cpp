#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
        string s;
        cin>>s;
        int n;
        n=s.length();
        if(n>10){
            cout<<s[0]<<(n-2)<<s[(n-1)]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}