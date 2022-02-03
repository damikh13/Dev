#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    int cnt_chet = 0, cnt_nechet = 0, cnt_k13_chet = 0, cnt_k13_nechet = 0;
    int final_cnt = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 5) {
            // a[i - 5]
            if (a[i - 5] % 13 == 0) {
                if (a[i - 5] % 2 == 0) {
                    ++cnt_k13_chet;
                } else {
                    ++cnt_k13_nechet;
                }
            }
            if (a[i - 5] % 2 == 0) {
                ++cnt_chet;
            } else {
                ++cnt_nechet;
            }
            

            // a[i]
            if (a[i] % 13 == 0) {
                if (a[i] % 2 == 0) {
                    final_cnt += cnt_nechet;
                } else {
                    final_cnt += cnt_chet;
                }
            } else {
                if (a[i] % 2 == 0) {
                    final_cnt += cnt_k13_nechet;
                } else {
                    final_cnt += cnt_k13_chet;
                }
            }
        }
    }

    cout << final_cnt << '\n';
}