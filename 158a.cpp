#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,c=0;
    cin>>n>>x;
    int s[(n-1)];
    for(int i=0; i<=(n-1); i++){
        cin>>s[i];
    }
    for(int i=0; i<=(n-1); i++){
        if(s[i] >= s[(x-1)] && s[i] != 0){
            c=c+1;
        }
    }
    cout<<c<<endl;
}