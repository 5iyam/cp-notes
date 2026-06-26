#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    sort(arr,arr+4);
    cout<<-(arr[3] - (arr[0]+arr[1]))<<" ";
    cout<<-(arr[3] - (arr[0]+arr[2]))<<" ";
    cout<<-(arr[3] - (arr[2]+arr[1]))<<" ";

    return 0;
}