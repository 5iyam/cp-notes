#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        vector<int>ans;
        int cnt=0;
        int n;
        cin >> n;
        if(n >= 1 && n <= 9){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else{
            for(int j=10; ; j=j*10){
                int x = n % j;
                ans.push_back(x);
                n = n - x;
                if(x > 0){
                    cnt++;
                }
                if(n == 0){
                    break;
                }
            }
            reverse(ans.begin(),ans.end());
            cout<<cnt<<endl;
            for(int x:ans){
                if(x == 0){
                    continue;
                }
                else{
                    cout<<x<<" ";
                }
            }
        }
    }

    return 0;
}