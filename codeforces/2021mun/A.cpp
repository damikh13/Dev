#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int a_7 = a;
    int b_8 = b;
    int c_9 = c;
    if (a / 4 * 4 != a) {
        a_7 = ((a / 4) + 1) * 4;
    }

    if (b / 4 * 4 != b) {
        b_8 = ((b / 4) + 1) * 4;
    }
    
    if (c / 4 * 4 != c) {
        c_9 = ((c / 4) + 1) * 4;
    }

    cout << a_7 + b_8 + c_9 << ' ';

    int v_a = a_7 / 12, v_b = b_8 / 8, v_c = c_9 / 4;
    if (a_7 / 12 * 12 != a_7) {
        v_a = v_a + 1;
    }

    if (b_8 / 8 * 8 != b_8) {
        v_b = v_b + 1;
    }
    
    if (c_9 / 4 * 4 != c_9) {
        v_c = v_c + 1;
    }
    cout << v_a + v_b + v_c << '\n';
}
