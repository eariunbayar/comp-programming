#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, f[1001];
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> f[i];
    }
    
    sort(f, f + m);

    int ans = f[n-1] - f[0];
    for (int i = 1; i <= m - n; i++){
        if (f[i+n-1] - f[i] < ans){
            ans = f[i+n-1] - f[i];
        }
    }
    cout << ans << endl;
    return 0;
}