#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, f, t;
    cin >> n >> f >> t;

    vector<ll> nums(n);
    for (ll i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    ll maxswap = n * (n + 1) / 2 + 1;
    vector<vector<ll> > dp(f + 1, vector<ll>(maxswap, -LLONG_MAX));
    dp[0][0] = 0;

    for (ll i = 0; i < n; ++i) {
        for (ll j = min(i + 1, f) - 1; j >= 0; --j) {
            ll cost = i - j;
            for (ll k = maxswap - cost - 1; k >= 0; --k) {
                    dp[j + 1][k + cost] = max(dp[j + 1][k + cost], dp[j][k] + nums[i]);
            }
        }
    }

    ll ans = LLONG_MAX;
    for (ll k = 0; k < maxswap; ++k) {
        if (dp[f][k] >= t) {
            ans = min(ans, k);
        }
    }

    if (ans == LLONG_MAX) {
        cout << "NO";
    } else {
        cout << ans;
    }
    cout << endl;

    return 0;
}
