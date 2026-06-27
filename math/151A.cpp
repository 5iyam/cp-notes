#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,Q,W;
    cin>>n>>k>>l>>c>>d>>p>>Q>>W;
    int x = (p/W);
    int y = ((k*l)/Q);
    int m = min({(c*d),x,y});
    cout<< m / n<<endl;

    return 0;

}