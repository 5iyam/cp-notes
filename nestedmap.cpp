#include<bits/stdc++.h>
using namespace std;

int main(){
    bool found = false;
    int arr[10]={1,3,2,5,4,6,9,8,7,10};
    sort(arr,arr+10);
    int r = 10-1;
    int l = 0;
    int x;
    cin >> x;
    while(l <= r){
    int mid = (l+r)/2;
    if(arr[mid] == x){
        found = true;
        cout<<"found"<<endl;
        break;
    }
    else if(arr[mid] < x){
        l = mid+1;
    }
    else{
        r = mid - 1;
    }
    }
    if(found){
        cout<<"Found"<<"\n";
    }
    else{
        cout<<"Not Found"<<"\n";
    }

    return 0;
   
}