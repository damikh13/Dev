#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    int mx = -1;
    vector<int> a(n);
    int mx_sum = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 7) {
            mx = max(mx, a[i - 7]);
        }
        mx_sum = max(mx_sum, a[i] + mx);
    }

    cout << mx_sum << '\n';
}