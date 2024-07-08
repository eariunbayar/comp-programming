#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool check = true;

    for (int i = 0; i < s.length();) {
        if (s[i] == '1') {
            if (i + 1 < s.length() && s[i + 1] == '4') {
                if (i + 2 < s.length() && s[i + 2] == '4') {
                    i += 3;
                } else {
                    i += 2;
                }
            } else {
                i += 1;
            }
        } else {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
