#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;
     for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0; j<n; j++){
            int z;
            cin >> z;
            arr[j] = z;
        }
        sort(arr,arr+n);
        int x = (arr[0]+arr[n-1])/2;
        cout<<arr[n-1]-x<<endl;
    }
   
}