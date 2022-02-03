#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int nkm1 = 0, nkm2 = 0;
    for (int i = 0; i < n; ++i) {
        int tmp; cin >> tmp;
        if (tmp % 26 != 0) {
            if (tmp >= nkm1) {
                nkm2 = nkm1;
                nkm1 = tmp;
            } else if (tmp >= nkm2) {
                nkm2 = tmp;
            }
        }
    }

    if (nkm1 * nkm2 % 26 == 0) {
        cout << "0\n";
    } else {
        cout << nkm1 * nkm2 << '\n';
    }
}