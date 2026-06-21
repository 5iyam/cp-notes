#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    n=s.length();
    if(s[0]>='a' && s[0]<='z'){
        char c=s[0];
        c=c-32;
        cout<<c;
        for(int i=1; i<=(n-1); i++){
            cout<<s[i];
        }
    }
    else{
        cout<<s<<endl;
    }

}