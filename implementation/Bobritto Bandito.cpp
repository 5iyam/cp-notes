#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n,m,l,r;
        cin >> n >> m >> l >> r;

        if(n == m){
            cout<<l<<" "<<r<<endl;
        }
        else if(m <= r){
            cout<<0<<" "<<m<<endl;
        }
        else if(m <= abs(l)){
            cout<<0<<" "<<-m<<endl;
        }
        else if(m > r){
            cout<<-(m-r)<<" "<<r<<endl;
        }
        else if(m > abs(l)){
            cout<<-l<<" "<<m-abs(l)<<endl;
        }

    }

    return 0;
}