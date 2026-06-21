#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,flag=0;
    cin>>s>>n;
    pair<int,int>arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i++){
        if(s < arr[i].first || s == arr[i].first){
            cout<<"NO"<<endl;
            break;
        }
        else if(s > arr[i].first){
            flag+=1;
            s = s+arr[i].second;
        }
    }
    if(flag == n){
        cout<<"YES"<<endl;
    }
    return 0;
}