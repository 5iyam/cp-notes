#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cin >> n;
    int flag=0;
    for(int i = 2; i*i <= n; i++){
        if (n % i == 0){
            flag =1;
            break;
        }
    }
    if (flag == 1){
        cout<<n<<" is non prime"<<endl;
    }
    else{
        cout<<n<<" is prime"<<endl;
    }
    return 0;
}