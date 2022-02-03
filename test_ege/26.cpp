#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, s; cin >> n >> s;
    int spend_sum = 0, cnt = 0;
    vector<pair<int, int>> buy;
    map<int, int> money;
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        money[a] = s;
        buy.push_back({a, b});
    }

    sort(buy.begin(), buy.end());


    cout << "#############################################\n";
    for (auto now : buy) {
        cout << now.first << ' ' << now.second << '\n';
    }
    cout << "#############################################\n";
    for (int i = 0; i < buy.size(); ++i) {
        if (money[buy[i].first] - buy[i].second >= 0) {
            spend_sum += buy[i].second;
            money[buy[i].first] -= buy[i].second;
            cnt += 1;
        }
    }

    cout << cnt << ' ' << spend_sum << '\n';
}


/*
7 12
150 8
237 3
150 4
237 5
237 5
150 3
150 3
*/