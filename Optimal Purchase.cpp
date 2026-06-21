#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    for(long long i=0; i<t; i++){
        long long n,a,gp;
        cin >> n>>a>>gp;
        long long g = n/3;
        long long rs = n % 3;
        long long sum_1 = n*a;
        long long sum_2;
        if(n % 3 == 0){
             sum_2 = (n/3)*gp;
        }
        else if(n % 3 != 0){
             sum_2 = (g+1)*gp;
        }
        long long sum_3=g*gp+rs*a;
        //cout<<sum_1<<" "<<sum_2<<" "<<sum_3<<endl;
        long long arr[3]={sum_1,sum_2,sum_3};
        sort(arr,arr+3);
        cout<<arr[0]<<endl;
    }
    return 0;
}