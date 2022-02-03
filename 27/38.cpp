#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{
    int a; cin >> a;
    ll n; cin >> n;
    ll m_chet = 0;
    ll m_nechet = 0;
    for (ll i = 0; i < n; ++i) {
        ll tmp; cin >> tmp;
        if (tmp % 2 == 0) {
            m_chet = max(tmp, m_chet);
        } else {
            m_nechet = max(tmp, m_nechet);
        }
    }
    ll r; cin >> r;
    ll R = m_chet + m_nechet;
    if (!(m_nechet && m_chet)) {
        R = -1;
    }
    if (R == r) {
        cout << "Calculated reference value: " << R << "\nControl passed\n";
    } else {
        cout << "Calculated reference value: " << R << "\nControl failed\n";
    }
}