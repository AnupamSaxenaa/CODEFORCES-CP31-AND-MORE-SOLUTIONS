#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;

void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll low = 1, high = 1e9;
    __int128_t sum_a = 0, sum_a2 = 0;
    for (ll x : a) {
        sum_a += x;
        sum_a2 += (__int128_t)x * x;
    }

    __int128_t target = c;

    while (low <= high) {
        ll mid = low + (high - low) / 2;

        __int128_t t_area = sum_a2 + 4 * mid * sum_a + (__int128_t)4 * n * mid * mid;

        if (t_area == target) {
            cout << mid << "\n";
            return;
        } else if (t_area > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << -1 << "\n";
}

int main() {
    fastio
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
