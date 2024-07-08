#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    vector<int> q;

    cin >> k;

    for (int i = 0; i < 12; i++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }

    int N = q.size();
    sort(q.begin(), q.end());

    int sum = 0;
    int month = 0;
    bool flag = false;

    if (k == 0) {
        cout << 0 << endl;
        flag = true;
    }

    for (int i = N - 1; i >= 0 && !flag; i--) {
        sum += q[i];
        month++;

        if (sum >= k) {
            cout << month << endl;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << -1 << endl;
    }

    return 0;
}
