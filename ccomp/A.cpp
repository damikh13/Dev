#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll count(ll a) {
    int cnt = 0;
    while (a > 0) {
        if (a % 2 == 1) {
            cnt++;
        }
        a /= 2;
    }
    return cnt;
}

int main()
{
    ll n, type; cin >> n; cin >> type;
    if (type == 1) {
        cout << count(n) << '\n';
        return 0;
    } else {
        cout << 32 - count(n) << '\n';
        return 0;
    }
}