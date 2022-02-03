#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ll  w, h, n; cin >> w >> h >> n;
    ll l = max(w, h); // determine l
    ll r = max(w, h) * n; // determine r
    ll k, m;
    while (l < r) {
        m = (l + r) / 2;
        k = (m / w) * (m / h);
        if (k < n) {
            l = m + 1;
        } else {
            r = m;
        }
    }

    cout << r << '\n';
}