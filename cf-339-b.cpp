#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, l=1;
    cin>>n>>m;
    long long ans = 0;
    for(int i=0; i<m; i++){
        int s;
        cin>>s;
        if(s >= l) ans += s-l;
        else ans += n - (l - s);
        l=s;
    }
    cout<<ans<<endl;
    return 0;
}