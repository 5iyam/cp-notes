#include<bits/stdc++.h>
using namespace std;

int digitsum(int x){
    int sum =0;
    while(x > 0){
        sum+=x % 10;
        x/=10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int>ans;
    for(int x=max(1,n-90); x<=n; x++){
        if((x + digitsum(x)) == n){
            ans.push_back(x);
        }
    }
    cout<<ans.size()<<endl;
    for(int x: ans){
        cout<<x<<endl;
    }
    return 0;
}