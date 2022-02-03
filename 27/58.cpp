#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<int> osts_before(10);
    map<int, int> complementary = {{1, 1}, {3, 7}, {7, 3}, {9, 9}};
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 5) {
            ++osts_before[a[i - 5] % 10];
        }
        if (complementary.find(a[i] % 10) != complementary.end()) {
            cnt += osts_before[complementary[a[i] % 10]];
        }
    }

    cout << cnt << '\n';
}