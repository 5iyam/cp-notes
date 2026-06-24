#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>st;
    int x;
    cin >> x;
    for(int i=0; i<x; i++){
        int a;
        cin >> a;
        st.insert(a);
    }
    int y; 
    cin >> y;
    for(int i=0; i<y; i++){
        int b;
        cin>>b;
        st.insert(b);
    }
    if(st.size() == n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;

}