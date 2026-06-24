#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int flag=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        s[i]=tolower(s[i]);
    }
    string t;
    cin>>t;
    for(int i=0; i<t.length(); i++){
        t[i]=tolower(t[i]);
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]>t[i]){
            cout<<1<<endl;
            break;
        }
        else if(s[i]<t[i]){
            cout<<-1<<endl;
            break;
        }
        flag+=1;
    }
    if(flag == s.length()){
        cout<<0<<endl;
    }

    return 0;
}