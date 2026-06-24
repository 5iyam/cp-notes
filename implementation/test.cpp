#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n];
    int a[n];
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        h[i] = x;
        int y;
        cin >> y;
        a[i] = y;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(h[i] == a[j]){
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}