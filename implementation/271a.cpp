#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[4];
    for(int i=n+1 ; ; i++){
        int x = i;
        for(int j=0; j<4; j++){
            arr[j] = x % 10;
            x = x / 10;
        }
        if( arr[0] != arr[1] &&
            arr[0] != arr[2] &&
            arr[0] != arr[3] &&
            arr[1] != arr[2] &&
            arr[1] != arr[3] &&
            arr[2] != arr[3]){
            cout<<i<<endl;
            break;
        }
    }
    return 0;

}