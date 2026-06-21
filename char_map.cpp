#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        map<char,int>m;
        for(int j=0; j<9; j++ ){
           char x;
           cin >> x;
           m[x]++;
        }
        if(m['A'] < 3){
            cout<<'A'<<endl;
        }
        else if(m['B'] < 3){
            cout<<'B'<<endl;
        }
        else if(m['C'] < 3){
            cout<<'C'<<endl;
        }
    }
    return 0;
}