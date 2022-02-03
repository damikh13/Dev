#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int k2 = 0, k3 = 0, k6 = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x % 6 != 0) {
            if (x % 2 == 0) {
                k2 += 1;
            }
            if (x % 3 == 0) {
                k3 += 1;
            }
        } else {
            k6 += 1;
        }
    }

    int additional;
    for (int i = 1; i <= k6; ++i) {
        additional += (n - i);
    }
    cout << "additional: " << k6 << '\n';
    cout << "k2: " << k2 << " k3: " << k3 << " k6: " << k6 << '\n';
    cout << k2 * k3 + additional << '\n';
}
