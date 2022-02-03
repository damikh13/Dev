#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));    
    int curr_num = 0;
    
    for (int k = 0; k <= n + m - 2; ++k) {
        for (int i = 0; i < n; ++i) {
            int j = k - i;
            if (j >= 0 && j < m) {
               a[i][j] = curr_num;
            }
        }
        ++curr_num;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}