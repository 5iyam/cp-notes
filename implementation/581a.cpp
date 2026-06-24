#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >>a>>b;
    int avg=(a+b)/2;
    if(a > b){
        cout<<b<<" "<<(avg-b)<<endl;
    }
    else if(b > a){
        cout<<a<<" "<<(avg-a)<<endl;
    }
    else if(a == b){
        cout<<a<<" "<<0<<endl;
    }
    return 0;
}