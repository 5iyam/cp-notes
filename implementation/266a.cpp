#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i] == s[(i+1)]){
            sum+=1;
        }
        else{
            sum+=0;
        }
    }
    cout<<sum<<endl;
    return 0;
}