#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, money; cin >> n >> money;

    vector<pair<int, int>> A;
    vector<pair<int, int>> Z;
    for (int i = 0; i < n; ++i) {
        char type; cin >> type;
        int price, amount; cin >> price >> amount;
        if (type == 'A') {
            A.push_back({price, amount});
        } else {
            Z.push_back({price, amount});
        }
    }

    sort(A.begin(), A.end());
    sort(Z.begin(), Z.end());

    for (int i = 0; i < A.size(); ++i) {
        int price = A[i].first;
        int number = A[i].second;
        int we_can_buy = money / price;
        money -= min(we_can_buy, number) * price;
    }

    int cnt = 0;
    for (int i = 0; i < Z.size(); ++i) {
        int price = Z[i].first;
        int number = Z[i].second;
        int we_can_buy = money / price;
        money -= min(we_can_buy, number) * price;
        cnt += min(we_can_buy, number);
    }

    cout << cnt << ' ' << money << '\n';
}