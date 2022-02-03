#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int m; cin >> m;
    vector<vector<int>> c(n + 1);
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        c[x].push_back(y);
        c[y].push_back(x);
    }

    // for (auto now : c[4]) {
    //     cout << now << ' ';
    // }
    for (int i = 0; i < (n - 1); ++i) {
        for (int j = 0; j < (n - 1); ++j) {
            int x = a[j], y = a[j + 1];
            if (a[j] > a[j + 1] && find(c[x].begin(), c[x].end(), y) == c[x].end()) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (auto now : a) {
        cout << now << ' ';
    }
    cout << '\n';
}