#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; ++i) cin >> a[i];

    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        int d = a[i] % 10;
        if (i - d >= 0) {
            if (a[i] % 2 != a[i - d] % 2) {
                ++cnt;
            }
        }
    }
    cout << cnt << '\n';
}