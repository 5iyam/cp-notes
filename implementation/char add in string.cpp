#include<bits/stdc++.h>
using namespace std;

int main(){
    string s_1;
    string s_2;
    cin >> s_1 >> s_2;
    string s_3 = "";
    for(int i = 0; i < s_1.length(); i++){
        if(s_1[i] == s_2[i]){
            s_3 += '0';
        }
        else{
            s_3 += '1';
        }
    }

    cout<<s_3<<endl;

    return 0;
}