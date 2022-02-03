#include <bits/stdc++.h>

using namespace std;

bool my_cmp(int &a, int &b)
{
    return a > b;
}

int main()
{
    int n; cin >> n;
    vector<int> gcds(1001);
    int gcd_max = -1;
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        int g = __gcd(a, b);
        gcds[g]++;
        gcd_max = max(gcd_max, gcds[g]);
    }

    vector<int> max_gcds;

    for (int i = 0; i < 1001; ++i) {
        if (gcds[i] == gcd_max) {
            max_gcds.push_back(i);
        }
    }

    sort(max_gcds.begin(), max_gcds.end(), my_cmp);

    for (int i = 0; i < max_gcds.size(); ++i) {
        cout << max_gcds[i] << ' ';
    }
}