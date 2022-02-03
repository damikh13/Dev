#include <bits/stdc++.h>

using namespace std;

int Max(int a, int b, int c) {
    return ::max(::max(a, b), c);
}

int main()
{
    int n; cin >> n;
    int cnt = 0;
    int k_2 = 0, k_3 = 0, k_6_1 = 0, k_6_2 = 0, k_all = 0;
    while (n) {
        ++cnt;
        if (n % 6 == 0) {
            if (n >= k_6_1) {
                k_6_2 = k_6_1;
                k_6_1 = n;
            } else if (n > k_6_2) {
                k_6_2 = n;
            }
        } else {
            if (n % 2 == 0) {
                k_2 = max(k_2, n);
            } else if (n % 3 == 0) {
                k_3 = max(k_3, n);
            }
            k_all = max(k_all, n);
        }
        cin >> n;
    }
    int R; cin >> R;
    int r = Max((k_6_1 * k_6_2), (k_2 * k_3), (k_6_1 * k_all));
    if (r == 0) r = -1;
    
    cout << "Recived " << cnt << " numbers\n";
    cout << "Recived reference value: " << R << '\n';
    cout << "Calculated reference value: " << r << '\n';
    if (r == R) {
        cout << "Control passed\n";
    } else {
        cout << "Control failed\n";
    }
}