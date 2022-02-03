#include <bits/stdc++.h>

using namespace std;

int main() {
// 0 -- 48, 0 -- 57
    string inp;
    getline(cin, inp);
    multiset<int> a;
    for (int i = 0; i < inp.size(); ++i) {
        int converted = (int) inp[i];
        if (converted >= 48 && converted <= 57) {
            a.insert(converted % 48);
        }
    }

    if (a.size() == 0) {
        cout << "-1\n";
        return 0;
    }
    for (int i = 1; i <= a.size(); ++i) {
        auto it = a.end();
        for (int j = 0; j < i; ++j) {
            --it;
        }
        cout << *it;
    }
}