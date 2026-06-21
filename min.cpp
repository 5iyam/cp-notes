#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n,m,l,r;
        cin >> n >> m >> l >> r;
        int r_1 = min(r,m);
        int l_1 = r_1 - m;
        cout<<l_1<<" "<<r_1<<endl;
    }

    return 0;
}