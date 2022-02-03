#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream F;
    string path = "C:\\Users\\damikh13\\Desktop\\26data\\26-1.txt";
    F.open(path);

    int space, n, taken, cnt; F >> space >> n;
    taken = cnt = 0;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) F >> a[i];

    sort(a.begin(), a.end());

    // берём, пока можем
    int last_taken = -1;
    for (int i = 0; i < n; ++i) {
        int free_space = space - taken;
        if (free_space - a[i] >= 0) {
            ++cnt;
            taken += a[i];
            last_taken = a[i];
        }
    }

    // пытаемся заменить
    int ma = -1;
    for (int i = n - 1; i > 0; --i) {
        int free_space = space - taken;
        free_space += last_taken;
        if (free_space - a[i] >= 0) {
            ma = a[i];
            break;
        }
    }

    // ответ
    cout << cnt << ' ' << ma << '\n';
}