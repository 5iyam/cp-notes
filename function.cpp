#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    return f;
}

int main(){
    int n,r;
    cin>>n>>r;
    int nfac=fac(n);
    int rfac=fac(r);
    int m=fac(n-r);
    int l=rfac*m;
    int ncr=nfac/l;
    cout<<ncr<<endl;
    return 0;
}