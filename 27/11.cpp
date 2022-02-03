#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int m_92 = INT_MAX;
    int m_95 = INT_MAX;
    int m_98 = INT_MAX;
    vector<vector<int>> prices(3);
    for (int i = 0; i < n; ++i) {
        string test; cin >> test; cin >> test;
        int type, price;
        cin >> type >> price;
        if (type == 98) {
            m_98 = min(m_98, price);
            prices[2].push_back(price);
        } else if (type == 95) {
            m_95 = min(m_95, price);
            prices[1].push_back(price);
        } else {
            m_92 = min(m_92, price);
            prices[0].push_back(price);
        }
    }

    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    for (int i = 0; i < 3; ++i) {
        for (auto now : prices[i]) {
            if (i == 0 && now == m_92) {
                cnt_1++;
            }
            if (i == 1 && now == m_95) {
                cnt_2++;
            }
            if (i == 2 && now == m_98) {
                cnt_3++;
            }
        }
    } // примерно так
    cout << cnt_1 << ' ' << cnt_2 << ' ' << cnt_3;
}