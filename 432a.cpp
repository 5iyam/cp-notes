#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,flag=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[i] = x+k;
    }

    for(int i=0; i<n; i++){
        if(arr[i] < 6){
            flag+=1;
        }
    }
    int d = flag/3;
    cout << d << endl;
    return 0;
}