#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            arr[j] = x;
        }
        int sum = 0;
        for(int j = 0; j < n-1; j++){
            if(arr[j+1] > arr[j]){
                arr[j+1] = arr[j];
            }
        }
        for(int j = 0; j < n; j++){
            sum += arr[j];
        }
        cout<<sum<<endl;
    }
}
