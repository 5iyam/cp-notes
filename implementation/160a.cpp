#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,sum_1=0,flag=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    for(int i=(n-1); i>=0; i--){
        if(sum_1 <= sum){
            flag++;
            sum-=arr[i];
            sum_1+=arr[i];
        }
        else{
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}