#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,int>m;
    m["laptop"]=100;
    m["mobile"]=50;
    m["ball"]=100;
    m["watch"]=10;
    m["pen"]=30;
    m["apple"]=100;
    m.insert({"bat",100});
    m.erase("pen");
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"count "<<m.count("laptop")<<endl;
    cout<<"count "<<m["laptop"]<<endl;
    if(m.find("ball") != m.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    return 0;
}