#include<bits/stdc++.h>
using namespace  std;

int main(){
    string s;
    getline(cin,s);
    set<char>st;
    if(s.length() == 2){
        cout<<0<<endl;
    }
    else{
        for(int i=1; i<s.length(); i=i+3){
        st.insert(s[i]);
   }
    cout<<st.size()<<endl;
    }
    
    return 0;
}