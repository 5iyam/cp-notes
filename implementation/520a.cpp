#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        s[i]=tolower(s[i]);
    }

    set<char> st;
    for(char c : s){
        st.insert(c);
    }

    int t=st.size();
    if( t >= 26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}