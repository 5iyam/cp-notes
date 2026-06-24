#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s=n;
    int flag=0;
    for(int i=1; ; i++){
        int sum=0;
        for(int j=1; j<=i; j++){
            sum+=j;
        }
        //cout<<sum<<endl;
        s=(s-sum);
        //cout<<s<<endl;
        if(s >= 0){
            flag+=1;
        }
        else{
            cout<<flag<<endl;
            return 0;
        }
            
    }
     
   

}