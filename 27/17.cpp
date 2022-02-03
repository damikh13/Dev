#include <bits/stdc++.h>

using namespace std;

bool my_cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(13, 0);
    for (int i = 0; i < n; ++i) {
        int req; cin >> req;
        a[req]++;
    }
    
    vector<pair<int, int>> req_cnt;
    for (int i = 1; i <= 12; ++i) {
        req_cnt.push_back({i, a[i]});
    }

    sort(req_cnt.begin(), req_cnt.end(), my_cmp);
    for (auto now : req_cnt) {
        if (now.second != 0) {
            cout << now.first << ' ' << now.second << '\n';
        }
    }
}