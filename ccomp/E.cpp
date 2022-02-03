#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, k; cin >> m >> k;
    map<int, int> alph; 
    for (int i = 0; i < m; ++i) {
        char letter; int r; cin >> letter >> r;
        alph[letter] = r;
    }
    
    string p;
    getline(cin, p);
    getline(cin, p);
    p += " ";
    string ans = "";

    int curr_sum = 0;
    string curr_word = "";
    for (int i = 0; i < p.size(); ++i) {
        char p_i = p[i];
        if (p_i != ' ') {
            curr_sum += alph[p_i];
            curr_word.push_back(p_i);
        } else {
            if (curr_sum >= k) {
                ans += curr_word;
                if (i != p.size()) {
                    ans += " ";
                }
            }
            curr_word = "";
            curr_sum = 0;
        }
    }

    if (ans.size() == 0) {
        cout << "-1\n";
    } else {
        cout << ans << '\n';
    }
}