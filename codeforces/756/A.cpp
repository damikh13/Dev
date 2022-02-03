#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main()
{
    ll n; cin >> n;
    for (ll i = 0; i < n; ++i) {
        ll tmp; cin >> tmp;
        if (tmp % 2 == 0) {
            cout << "0\n"; continue;
        }
        string s = to_string(tmp);
        if ((s[0] - '0') % 2 == 0) {
            cout << "1\n"; continue;
        }
        bool flag = false;
        for (ll j = 1; j < s.size(); ++j) {
            if ((s[j] - '0') % 2 == 0) {
                cout << "2\n"; flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << "-1\n";
        }
    }
}