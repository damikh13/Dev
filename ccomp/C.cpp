#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Ni, Nj; cin >> Ni >> Nj;
    int cnt = 1;
    int Si = 0, Sj = 0;
    while (cnt <= max(Ni, Nj)) {
        int x; cin >> x;
        if (cnt == Ni) {
            Si += x;
        }
        if (cnt == Nj) {
            Sj += x;
        }
        if (x == 0) {
            cnt += 1;
        }
    }

    cout << Si - Sj << '\n';
}