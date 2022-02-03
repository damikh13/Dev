#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main()
{
    ll t; cin >> t;
    for (ll i = 0; i < t; ++i) {
        ll a, b; cin >> a >> b;
        ll x = min(a, b);
        ll y = max(a, b);
        ll one_one = y;
        ll dop_to_3_1 = (y - x) / 2;
        if (x <= dop_to_3_1) {
            cout << x << '\n';
        } else {
            cout << dop_to_3_1 + (x - dop_to_3_1) / 2 << '\n';
        }
    }
}