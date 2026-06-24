#include<bits/stdc++.h>
using namespace std;

int main(){
    int k_2,k_3,k_5,k_6;
    cin>>k_2>>k_3>>k_5>>k_6;
    int arr[3]={k_2,k_5,k_6};
    sort(arr,arr+3);
    int r = k_2 - arr[0];

    cout<<(256*arr[0] ) + (32*min(r,k_3))<<endl;
    return 0;
}
