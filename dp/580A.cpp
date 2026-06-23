#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    vector<int>vec;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
     if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i+1] >= arr[i]){
            cnt++;
        }
        if(arr[i+1] < arr[i] || i == n-2){
            vec.push_back(cnt+1);
            cnt = 0;
        }
    }
    sort(vec.begin(),vec.end());
    cout<<vec.back()<<endl;

    return 0;
}