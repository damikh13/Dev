#include <bits/stdc++.h>

using namespace std;

int f(int t, int x, int y)
{
    return (t / x) + (t / y);
}

int main()
{
    int n, x, y; cin >> n >> x >> y;
    // Printing one copy using fastest scaner 
    // In order to use two scanners simluteneously
    // min(x, y) -- minimum time to print a copy
    int additional_time = min(x, y);
    --n;

    int l = 0;
    int r = n * max(x, y);

    while (l < r) {
        int m = (l + r) / 2;
        int count = f(m, x, y);
        if (count < n) {
            l = m + 1;
        } else {
            r = m;
        }
    }

    cout << r + additional_time << '\n';
}