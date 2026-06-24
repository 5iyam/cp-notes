#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,x,y;
    int flag=0;
    cin >> s >> n;
    for(int i=1; i<=n; i++){
        cin>>x>>y;
        if(s > x){
            flag+=1;
            s = s+y;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag == n){
        cout<<"YES"<<endl;
    }

    return 0;
}