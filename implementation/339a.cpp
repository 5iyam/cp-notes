#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    int n;
    cin>>s;
    n=s.length();
    for(int i=0; i<=(n-1); i+=2){
        t=t+s[i];
    }
    sort(t.begin(),t.end());
    int m;
    m=t.length();
    for(int i=0; i<=(m-1); i++){
        cout<<t[i];
        if(i != (m-1)) cout<<"+";
    }
    return 0;
}