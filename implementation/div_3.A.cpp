#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++ ){
            int x;
            cin >> x;
            arr[j] = x;
        }

        sort(arr,arr+n);
        cout<<(1 + arr[n-1]) - arr[0]<<endl;
    }

    return 0;
}