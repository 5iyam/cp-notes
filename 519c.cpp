#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a < b){
        int d=(a+b)/3;
        cout<<min(d,a)<<endl;
    }
    else if(b<a){
        int d=(a+b)/3;
        cout<<min(d,b)<<endl;
    }
    else {
        cout<<(a+b)/3<<endl;
    }
    
}