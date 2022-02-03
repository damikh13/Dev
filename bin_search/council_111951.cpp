#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main()
{
    ll n, k; cin >> n >> k;
    ll l = 0, r = n;
    while (l < r) {
        ll m = (l + r) / 2;
        ll fraction = 3 * (k + m);
        ll one_third = (n + m);
        if (fraction < one_third) {
            l = m + 1;
        } else {
            r = m;
        }
    }
    cout << r << '\n';
}