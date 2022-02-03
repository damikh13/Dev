#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));

    int tmp = 0;
    // first col
    for (int i = 0; i < n; ++i) {
        a[i][0] = tmp;
        ++tmp;
    }

    // diag
    for (int i = n - 2; i >= 0; --i) {
        a[i][n - i - 1] = tmp;
        ++tmp;
    }

    // upper triangle
    for (int i = 0; i < n - 2; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (a[i][j] == 0) {
                a[i][j] = tmp;
                ++tmp;
            }
        }
    }

    // bottom triangle
    for (int i = n - 1; i > 0; --i) {
        for (int j = n - i; j < n; ++j) {
            a[i][j] = tmp;
            ++tmp;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}