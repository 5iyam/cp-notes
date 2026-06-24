#include<bits/stdc++.h>
using namespace std;

int sumod(int num){
    int sum=0;
     while(num > 0){
        int lastd=num % 10;
        num /=10;
        sum+=lastd;
     }
     return sum;
}
 int main(){
    cout<<sumod(123)<<endl;
    return 0;
 }