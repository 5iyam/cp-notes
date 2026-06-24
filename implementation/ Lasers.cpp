#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a = 0;
        int b = 0;
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        for(int j=0; j<n; j++){
            int q;
            cin >> q;
            if(q <= y){
                a++;
            }

        }
        for(int j=0; j<m; j++){
            int w;
            cin >> w;
            if(w <= x){
                b++;
            }
        }
        cout<<a+b<<endl;
    }

    return 0;
}