#include <bits/stdc++.h>
using namespace std;

int n, m;
char s[1100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '.') {
                if ((i + j) & 1)
                    s[j] = 'W';
                else
                    s[j] = 'B';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
