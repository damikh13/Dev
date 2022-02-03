#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream F;
    string path = "C:\\Users\\damikh13\\Desktop\\26data\\26-3.txt";
    F.open(path);

    int space, n, taken, cnt; F >> space >> n;
    taken = cnt = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) F >> a[i];

    sort(a.begin(), a.end());

    int last_taken = -1;
    for (int i = 0; i < n; ++i) {
        int free_space = space - taken;
        if (free_space - a[i] >= 0) {
            ++cnt;
            taken += a[i];
            last_taken = a[i];
        }
    }

    for (int i = n - 1; n > 0; --i) {
        int free_space = space - taken;
        free_space += last_taken;
        if (free_space - a[i] >= 0) {
            last_taken = a[i];
            break;
        }
    }

    cout << cnt << ' ' << last_taken << '\n';
}