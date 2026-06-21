#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    sort(arr,arr+n);
    int q;
    cin >> q;
    while(q--){
        int m;
        cin >> m;
        int count = lower_bound(arr,arr+n,m)-arr;
        cout<<count<<endl;

    }

    return 0;
   
}
// lower_bound(arr,arr+n,m) = lesf pointer
// arr = right pointer
//arrays already live in memory; pointers are used to access and move through those memory addresses efficiently
//pointer is variable that store memory address
/**Index = seat number in cinema
Seat 0, Seat 1, Seat 2
Pointer = exact GPS location of seat
(23.456°N, 90.123°E)
You don’t want to tell people GPS every time — seat numbers are easier.
//p stores (or points to) the address of x, and *p gives the value stored at that address.
//p    = address
*p   = value
