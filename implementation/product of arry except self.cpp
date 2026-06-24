#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    vector<int>vec;
   for(int i = 0; i < n; i++){
    int m = 1;
    for(int j = 0; j < n; j++){
        if(arr[j] != arr[i] ){
            m = m*arr[j];
        }
    }
    vec.push_back(m);
   }

   for(int x:vec){
    cout<<x<<" ";
   }

    return 0;
}