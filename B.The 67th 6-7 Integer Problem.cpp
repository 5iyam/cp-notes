#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int sum=0;
        int arr[7];
        for(int j=0; j<7; j++){
            int x;
            cin >> x;
            arr[j] = x;
        }
        sort(arr,arr+7);
        for(int j=0; j<6; j++){
            sum = sum+(arr[j]*-1);
        }
        cout<<sum+arr[6]<<endl;

    }

    return 0;
}