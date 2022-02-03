#include <bits/stdc++.h>

using ll = long long;

using namespace std;

ll f(ll n, ll k)
{
    return (2 * k + n - 1) * n / 2;
}

int main()
{
    ll n, k; cin >> n >> k;
    ll l = 0;
    ll r = n + 1;
    while (l < r) {
        ll days = (l + r) / 2;
        ll solved_tasks = f(days, k);
        if (solved_tasks < n) {
            l = days + 1;
        } else {
            r = days;
        }
    }

    cout << r << '\n';
}