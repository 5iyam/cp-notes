#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ar[m];
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        ar[i] = x;
    }
    sort(ar,ar+m);
    int l=(m-n)+1;
     int arr[l];
    for(int i=0; i<l; i++){
        arr[i]=abs(ar[i]-ar[(n-1)+i]);
    }
    sort(arr,arr+l);
    cout<<arr[0]<<endl;
    return 0;
}