#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
    int cnt=0;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    sort(arr, arr + n, greater<int>());
    if(n == 2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
    }
    else{
        int m = n-2;
        for(int i = 0; i < m ; i++){//5-1=4
            if(arr[i] % arr[i+1] == arr[i+2]){
                cnt++;
            }
        }
        if(cnt == n-2){
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    }

    return 0;
}