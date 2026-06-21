#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >>a>>b;
    int a_1=a,b_1=b;
    int flag=0;
    for(int i=0; ; i++){
        a_1=a_1*3,b_1=b_1*2;
        
        if( a_1>b_1 ){
            break;
        }
        else{
            flag+=1;
        }
    }
    cout<<flag+1<<endl;
    return 0;

}