#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
     int n;
    cin >> n;
    map<int,int>m;
    for(int j=0; j<n; j++){
        int x;
        cin >> x;
        m[x]++;
    }
    if(m[1] < m[2]){
        int y=(m[2]-m[1])/3;
        cout<<m[1]+m[0]+y<<endl;
    }
    else if(m[2] < m[1]){
        int y=(m[1]-m[2])/3;
        cout<<m[2]+m[0]+y<<endl;
    }
    else if(m[1] == m[2]){
        cout<<m[1]+m[0]<<endl;
    }
    }


    return 0;
}