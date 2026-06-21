#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int k = 0;
        for(int j=1; j<=n; j++){
            cout<< j<<" ";
            cout<< j+(n+k)<<" ";
            cout<< j+(n+k)+1<<" ";
            k++;
        }
        cout<<endl;
    }
}