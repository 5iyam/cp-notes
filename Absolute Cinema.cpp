#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long sum=0;
        int n;
        cin >> n;
        long long a[n];
        long long b[n];
        long long c[n];
        for(int j=0; j<n; j++){
            long long x;
            cin >> x;
            a[j] = x;
        }
        for(int j=0; j<n; j++){
            long long y;
            cin >> y;
            b[j] = y;
        }
        for(int j=0; j<n; j++){
            if(a[j] > b[j]){
                sum+=a[j];
                c[j]=b[j];
            }
            else if(b[j] > a[j]){
                sum+=b[j];
                c[j]=a[j];
            }
            else if(a[j] == b[j]){
                sum+=a[j];
                c[j]=a[j];
            }
        }
       sort(c,c+n);
       cout<<c[n-1]+sum<<endl;

    }
    return 0;
}