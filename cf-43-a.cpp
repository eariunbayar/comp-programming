#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string ans;
    int res = 0;

    while (n--) {
        if (res != 0) {
            string q;
            cin >> q;
            if (q == ans) {
                res++;
            } else {
                res--;
            }
        } else {
            cin >> ans;
            res = 1;
        }
    }

    cout << ans << endl;

    return 0;
}
