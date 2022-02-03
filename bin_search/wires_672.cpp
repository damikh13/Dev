#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ll n, k; cin >> n >> k;
    ll max_len = -1;
    ll l_sum = 0;
    vector<ll> l_s(n);
    for (ll i = 0; i < n; ++i) {
        cin >> l_s[i];
        max_len = max(max_len, l_s[i]);
        l_sum += l_s[i];
    }
    if (l_sum < k) {
        cout << 0 << '\n';
    } else {
        ll l = 0;
        ll r = max_len + 1;
        while (l < r) {
            ll m = (l + r) / 2;
            ll cnt = 0;
            for (ll i = 0; i < n; ++i) {
                cnt += l_s[i] / m;
            }
            if (cnt < k) {
                r = m;            
            } else {
                l = m + 1;
            }
        }
        cout << r - 1 << '\n';
    }
}