#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int even_k5 = 0, odd_k5 = 0, even_max = 0, odd_max = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x % 5 == 0) {
            if (x % 2 == 0) {
                even_k5 = max(even_k5, x);
            } else {
                odd_k5 = max(odd_k5, x);
            }
        } else {
            if (x % 2 == 0) {
                even_max = max(even_max, x);
            } else {
                odd_max = max(odd_max, x);
            }
        }
    }

    if (even_max * odd_k5 > odd_max * even_k5 && even_max && odd_k5) {
        cout << min(even_max, odd_k5) << ' ';
        cout << max(even_max, odd_k5) << '\n';
    } else {
        if (odd_max && even_k5) {
            cout << min(odd_max, even_k5) << ' ';
            cout << max(odd_max, even_k5) << '\n';
        } else {
            cout << "0\n";
        }
    }
}