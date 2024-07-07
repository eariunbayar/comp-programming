#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    unordered_map<int, int> pos;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        pos[num] = i + 1;
    }

    long long sum1 = 0, sum2 = 0;

    cin >> m;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        sum1 += pos[q];
        sum2 += n - pos[q] + 1;
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}
