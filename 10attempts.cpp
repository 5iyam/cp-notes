#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if( n < 5 || n > 5){
            cout<<"NO"<<endl;
        }
        else{
            map<char,int>m;
            for(int j = 0; j < 5; j++){
                m[s[j]]++;
            }
            if(m['T'] > 1 || m['t'] == 1 || m['T'] == 0){
                cout<<"NO"<<endl;
            }
            else if(m['i'] > 1 || m['I'] == 1 || m['i'] == 0){
                cout<<"NO"<<endl;
            }
            else if(m['m'] > 1 || m['M'] == 1 || m['m'] == 0){
                cout<<"NO"<<endl;
            }
            else if(m['u'] > 1 || m['U'] == 1 || m['u'] == 0){
                cout<<"NO"<<endl;
            }
            else if(m['r'] > 1 || m['R'] == 1 || m['r'] == 0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
    
}