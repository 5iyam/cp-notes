#include<bits/stdc++.h>
using namespace std;

int main(){
    int c,v_0,v_1,a,l;
    int flag=0;
    cin>>c>>v_0>>v_1>>a>>l;

    int d = c - v_0;
    for(int i=a; ; i+=a){
        int x=v_0+i;
        if(d <= 0){
            break;
        }
        flag+=1;
        if(x >= v_1){
            d = d-(v_1-l);
        }
       else{
         d = d - (x-l);
       }
    }
    cout<<flag+1<<endl;
    return 0;
}