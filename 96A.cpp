#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();

    if( n < 7){
        cout<<"NO"<<endl;
    }
    else{
        int l=0;
    for(int i = 0; i < n; i++){
        int c=0;
        int m=i+1;
        for(int j = m; j < n; j++){
            if(s[i] == s[j]){
                c=c+1;
                if(c>=6){
                    cout<<"YES"<<endl;
                    return 0;

                }
            }
            else{
                break;
            }  
        }
        l = l+1;
        if(l == (n-1)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    }
    return 0;

}