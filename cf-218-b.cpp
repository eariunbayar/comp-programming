#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mx = 0, mn = 0, y = n;
    int a[m];

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a, a + m);

    for (int i = 0; i < m && n > 0; i++) {
        int x = a[i];
        while (x > 0 && n > 0) {
            mn += x;
            x--;
            n--;
        }
    }
    n = y;
    for (int i = 0; i < n; i++) {
        sort(a, a + m);
        mx += a[m - 1];
        a[m - 1]--;
    }

    cout << mx << " " << mn << endl;

    return 0;
}
