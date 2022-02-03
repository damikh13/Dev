#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int hrs = n / 3600;
    int mins = (n - hrs * 3600) / 60;
    int secs = n - mins * 60 - hrs * 3600;
    cout << hrs << ' ' << mins << ' ' << secs << '\n';
}