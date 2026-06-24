#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int  n;
        int cnt = 0;
        cin >> n;
        string s,t;
        cin >> s >> t;
        map<char,int>m_1,m_2;
        for(int j=0; j<n; j++){
        m_1[s[j]]++;
        m_2[t[j]]++;
       }
       for(auto x:m_1){
        for(auto y:m_2){
            if (x.first == y.first && x.second == y.second){
                cnt++;
                break;
            }
        }
       }
       if(cnt == m_1.size()){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
      
    }

    return 0;
}