#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<int> osts_before(10, 0);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 6) {
            ++osts_before[a[i - 6] % 10];
        }
        if (a[i] % 10 == 1) {
            cnt += osts_before[3];
        } else if (a[i] % 10 == 3) {
            cnt += osts_before[1];
        } else if (a[i] % 10 == 7) {
            cnt += osts_before[9];
        } else if (a[i] % 10 == 9) {
            cnt += osts_before[7];
        }
    }
    cout << cnt << '\n';
}