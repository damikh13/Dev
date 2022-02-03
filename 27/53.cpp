#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n, 0);
    int k2 = 0, k3 = 0, k6 = 0;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 3) {
            if (a[i - 3] % 6 != 0) {
                if (a[i - 3] % 2 == 0) {
                    ++k2;
                } else if (a[i - 3] % 3 == 0) {
                    ++k3;
                }
            } else {
                ++k6;
            }
            if (a[i] % 6 == 0) {
                cnt += (i - 2);
            } else {
                if (a[i] % 3 == 0) {
                    cnt += k2;
                } else if (a[i] % 2 == 0) {
                    cnt += k3;
                }
                cnt += k6;
            }
        }
    }

    cout << cnt << '\n';
}