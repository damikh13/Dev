#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int cnt = 0;
    for (int i = 0; i <= n - 5; ++i) {
        for (int j = i + 1; j < i + 5; ++j) {
            int x = a[i], y = a[j];
            if (((x * y) % 13 == 0) && ((x + y) % 2 != 0)) {
                ++cnt;
            }
        }
    }

    for (int i = n - 4; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int x = a[i], y = a[j];
            if (((x * y) % 13 == 0) && ((x + y) % 2 != 0)) {
                ++cnt;
            }
        }
    }

    cout << cnt << '\n';
}
/*
⠀⠀⠘⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⡜⠀⠀⠀
⠀⠀⠀⠑⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⠁⠀⠀⠀
⠀⠀⠀⠀⠈⠢⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠴⠊⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⢀⣀⣀⣀⣀⣀⡀⠤⠄⠒⠈⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣀⠄⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⡜⠘⠀⠀⠀⠀⠈⣿⠀⠁⣿⢳⠁⢈⢰⡦⠈⠀⢻
⣿⣿⡏⠀⠀⢀⣀⠀⠀⡀⠀⠀⢀⠀⠀⠁⠀⠀⠈⠉⠀⠀⠀⡘⠀⢰⠛⢠⣴⣄⣌
⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⢠⣠⡀⠀⠀⠀⠂⠀⠀⠀⠐⠀⠈⣡⠻⢹⢿
⣿⣿⠀⠀⠀⠁⠀⠀⠀⠄⠀⠀⡀⣀⣼⣟⣿⢵⣤⣤⣤⣤⣤⣤⣄⣀⣀⣠⠀⠢⣽
⣿⡿⠀⠀⠀⠀⠀⢐⣌⢖⣰⠊⠁⢸⣿⡟⠈⠀⢾⣿⣿⣿⣿⣿⣿⣿⣿⣾⡄⢰⢺
⣿⡇⠀⠀⠀⠀⢀⡀⢴⢖⣠⣣⣴⣿⢿⡇⣈⠐⢺⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⢠⣸
⣿⣷⡀⠀⠀⠀⠀⠸⣼⣿⣿⣿⣿⡷⠋⠅⠀⡀⢼⣿⠯⣿⣿⣿⣿⣿⣿⣿⡇⣼⣿
⡿⠁⠸⣄⣦⡀⠀⢡⣿⣿⣿⣿⣏⡤⠄⠄⠀⠀⠈⠉⠁⠘⢿⣿⣿⣿⣿⣿⣯⢸⣿
⠇⠀⠀⡹⢿⡏⠀⣾⣿⣟⠋⠉⠁⠀⠀⠀⠀⣀⣀⠀⠀⠀⢸⣿⠎⠉⠉⠉⠛⣤⣿
⡆⠀⡀⢣⢈⡟⠠⠻⣿⣿⣷⡄⠀⠀⢸⣶⣷⣷⣧⡄⠀⠀⢿⣧⢀⡀⠀⠉⢡⣿⣿
⣿⣦⡀⠘⢼⠃⣠⡲⠛⢿⡿⣿⡀⡀⠀⠹⣿⣿⡟⠀⠠⣤⠘⣿⣶⣿⣶⡾⣳⣿⣿
⣿⡿⣿⣶⡌⠰⡅⠌⠠⠈⠈⠙⢙⠑⢰⠀⠨⠟⠀⠀⣴⢌⡅⢻⣿⣿⣿⡇⣿⣿⣿
⣿⢇⣿⣿⠣⢿⣮⠀⢀⡀⠀⠀⠈⠁⣶⠀⠀⠀⠀⠀⠁⠀⢡⣺⣿⣿⡿⣸⣿⣿⣿
⣿⣾⣿⣏⠐⣿⢟⡈⠂⠀⠠⠀⠀⠀⣆⠀⠀⠀⠀⠀⠀⣢⣼⣸⣿⡿⢈⣿⣿⣿⣿
⣿⣿⣿⠃⡀⠈⠑⠁⠀⠄⠀⠀⠀⠲⠀⠀⠄⣀⠀⣸⣷⣮⣍⠃⢹⠇⣿⣿⣿⣿⣿
⣿⣿⣿⢀⣾⣷⣶⣌⠀⠠⠀⠀⢀⠍⠀⠀⠀⠀⠉⠁⠈⠙⠋⢰⡝⣼⣿⣿⣿⣿⣿
⣿⣿⣿⠋⠀⣼⣿⣿⣷⣄⠀⠀⠀⠊⠀⠀⠀⠀⠀⠀⠄⡀⢀⣼⢣⣿⣿⣿⣿⣿⣿
⣿⣿⣯⠀⢸⣿⣿⣿⡟⠛⠳⣄⠀⠀⠀⠀⠘⠌⠓⡀⢰⣮⣾⢠⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣧⠀⣹⣿⣿⣿⠗⠀⠀⠀⠀⠀⣀⡀⠀⠈⠀⠀⠈⠝⣡⣾⣿⣿⣿⣿⣿⣿⣿
⣿⣿⡏⠀⣿⣿⣿⠿⠃⢀⣴⣶⣾⣿⣿⣿⣿⣷⣾⢠⣶⣾⣮⣙⡻⣿⢿⣿⣿⣿⣿
⣿⣿⡇⠀⣿⣿⠃⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⡟⡼⠿⣿⣿⣿⣿⣮⡑⡝⣿⣿⣿
*/
