#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m_7 = -1;
    int m_all = -1;
    int cnt = 0;
    while (n) {
        cin >> n;
        cnt += 1;
        if (n % 7 != 0) {
            m_all = max(n, m_all);
        } else {
            if (n % 49 != 0) {
                m_7 = max(m_7, n);
            }
        }
    }
    int r; cin >> r;
    int R = m_7 * m_all;
    if (R <= 0) R = 1;
    cout << "Recived " << --cnt << " numbers\n";
    cout << "Recived reference value: " << r << '\n';
    cout << "Calculated reference value: " << R << '\n';
    if (r == R) {
        cout << "Control passed\n";
    } else {
        cout << "Control failed\n";
    }
}