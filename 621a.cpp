#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long sum =0;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++){
        long long x;
        cin >> x;
        arr[i] = x;
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    if(sum % 2 ==0){
        cout<<sum<<endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 1){
            sum = sum - arr[i];
            cout<<sum<<endl;
            return 0;
        }
    }

    
    
   
    
}