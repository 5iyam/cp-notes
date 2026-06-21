#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum_1=0,sum_2=0,sum_3=0;
    cin >> n;
    for(int i=0; i<n; i++){
       int x;
       cin >> x;
       sum_1+=x;
       int y;
       cin >> y;
       sum_2+=y;
       int z;
       cin >> z;
       sum_3+=z;
    }
    if(sum_1 == 0 && sum_2 == 0 && sum_3 ==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}