#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0,sum=0;
    cin >> n;
    m=(n*(n+1))/2;
    int x;
    cin >> x;
    int a_1[x];
    for(int i=0; i<x; i++){
        int a;
        cin >> a;
        a_1[i] = a;
    }
    for(int i=0; i<x; i++){
        sum+=a_1[i];
    }
    int y;
    cin >> y;
    int a_2[y];
    for(int i=0; i<y; i++){
        int b;
        cin >> b;
        a_2[i] = b;
    }
    for(int i=0; i<y; i++){
        int flag=0;
        for(int j=0; j<x; j++){
            if(a_2[i] == a_1[j]){
                break;
            }
            else{
                flag+=1;
            }
        }
        if(flag==x){
            sum+=a_2[i];
        }

    }
    if(sum == m){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}