#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++ ){
     int n;
    cin >> n;
    int arr[n];
    for(int j=0; j<n; j++){
        int x;
        cin >> x;
        arr[j] = x;
    }
    sort(arr,arr+n,greater<int>());//greater<int>()
    cout<<arr[0]*n<<endl;
    }
   
    return 0;
}