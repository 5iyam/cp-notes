#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        sum+=m;

    }
    if(sum > 0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}