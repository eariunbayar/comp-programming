#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    cin >> m;
    int max_x = 0, count = 0;
    
    for (int i = 0; i < m; ++i) {
        int b;
        cin >> b;
        
        for (int j = 0; j < n; ++j) {
            if (b % a[j] == 0) {
                int x = b / a[j];
                if (x > max_x) {
                    max_x = x;
                    count = 1;
                } else if (x == max_x) {
                    count++;
                }
                break;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
