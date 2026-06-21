#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];
     arr[0]={0};
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        arr[i+1] = (arr[i] - a)+b;
    }
    sort(arr,arr+(n+1));
    cout<<arr[n]<<endl;
    return 0;
}