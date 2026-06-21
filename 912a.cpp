#include<bits/stdc++.h>
using namespace std;

int main(){
    long long A,B;
    cin >>A>>B;
   long long x,y,z;
   cin >>x>>y>>z;
   long long nofy=x*2+y;
   long long nofb=y+3*z;
   long long yneeded=max(0LL,nofy-A);
   long long bneeded=max(0LL,nofb-B);
   cout<<yneeded+bneeded<<endl;
    return 0;
}