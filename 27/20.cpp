#include <bits/stdc++.h>

using namespace std;

bool my_cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(10, 0);
    
    for (int i = 0; i < n; ++i) {
        int tmp; cin >> tmp;
        while (tmp > 9) {
            tmp /= 10;
        }
        a[tmp]++;
    }

    vector<pair<int, int>> num_cnt;
    for (int i = 0; i < 10; ++i) {
        if (a[i] != 0) {
            num_cnt.push_back({i, a[i]});
        }
    }

    sort(num_cnt.begin(), num_cnt.end(), my_cmp);

    cout << num_cnt[0].first << '\n';
}