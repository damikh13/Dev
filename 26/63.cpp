#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream F;
    string path = "C:\\Users\\damikh13\\Desktop\\26data\\26-63.txt";
    F.open(path);

    int n, money; F >> n >> money;
    vector<pair<int, char>> a(n);
    for (int i = 0; i < n; ++i) {
        int price; char type; F >> price >> type;
        a[i] = {price, type};
    }

    sort(a.begin(), a.end());

    int last_taken_idx = 0;
    vector<int> Q_s;
    for (int i = 0; i < n; ++i) {
        if (money - a[i].first >= 0) {
            money -= a[i].first;
            last_taken_idx = i;
            if (a[i].second)
        } else {
            break;
        }
    }
}