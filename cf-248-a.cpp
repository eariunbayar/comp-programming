#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lo=0, lc=0;
    int ro=0, rc=0;

    for (int i=0; i<n; ++i) {
        int li, ri;
        cin>>li>>ri;
        
        if(li==1)lo++;
        else lc++;
        
        if(ri==1)ro++;
        else rc++;
    }
    cout<<min(lo,lc)+min(ro,rc);

    return 0;
}
