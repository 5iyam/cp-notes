#include<bits/stdc++.h>
using namespace std;

int main(){

    mulimap<string,int>m;
    m.emplace(ball,100);
    m.emplace(pen,50);
    m.empace(book,100);

    for(auto p: m){
        cout<<p.first()<<" "<<p.second()<<endl;
    }
   
    return 0;
}