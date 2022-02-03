#include <iostream>

using namespace std;

int f(int n)
{
    int cnt_good_divs = 0;
    int max_good_div = -1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i % 10 == 7) {
                ++cnt_good_divs;
                max_good_div = max(i, max_good_div);
            }
            if (i * i != n) {
                if ((n / i) % 10 == 7) {
                    ++cnt_good_divs;
                    max_good_div = max((n / i), max_good_div);
                }
            }
        }
    }
    if (cnt_good_divs == 3) {
        return max_good_div;
    } else {
        return 0;
    }
}

int main()
{
    int cnt = 0;
    for (int i = 550001;; ++i) {
        if (f(i)) {
            cout << i << ' ' << f(i) << ' ' << '\n';
            cnt += 1;
        }
        if (cnt == 5) {
            break;
        }
    }
}