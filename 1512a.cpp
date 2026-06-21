#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        int arr[x];
        for(int j=0; j<x; j++){
            int y;
            cin >> y;
            arr[j] = y;
        }
        for(int j=0; j<x; j++){
            if((arr[j] != arr[j+1]) && (arr[j+1] != arr[j+2])){
                cout<<j+1+1<<endl;
                break;
            }
            else if((arr[j] != arr[j+1]) && (arr[j+1] == arr[j+2])){
                cout<<j+1<<endl;
                break;
            }
            else if((arr[j] == arr[j+1]) && (arr[j+1] != arr[j+2])){
                cout<<j+2+1<<endl;
                break;
            }
        }
    }
    return 0;

}