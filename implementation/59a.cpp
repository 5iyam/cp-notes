#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=0;
    int u=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            l+=1;
        }
         else{
        u+=1;
    }
    }
   if(l > u){
    for(int i=0; i<s.length(); i++){
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
   }
   else if(u > l){
    for(int i=0; i<s.length(); i++){
        s[i]=toupper(s[i]);
    }
    cout<<s<<endl;
   }
   else if(l==u){
     for(int i=0; i<s.length(); i++){
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
   }
    return 0;
}