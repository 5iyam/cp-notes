#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,tum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=1; j<=3; j++){
            cin>>x;
            sum=sum+x;

        }
        if(sum>=2){
            tum=tum+1;
        }
    }
    cout<<tum<<endl;
}
