#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int cnt = 0;
    for(int i=0; i < s.length(); i++){
        if(s[i] == t[(s.length()-1) - i]){
            cnt++;
        }
    }

    if(t.length() > s.length()){
        cout<<"NO"<<endl;
    }
    else  if(cnt == s.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}