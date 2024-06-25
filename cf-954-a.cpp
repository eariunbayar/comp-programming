#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int mx, mn;
    mx=max(a, max(b, c));
    mn=min(a, min(b, c));
    cout<<mx-mn<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}