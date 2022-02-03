#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int chet_17_1 = 0, chet_17_2 = 0, chet = 0;
    int nechet_17_1 = 0, nechet_17_2 = 0, nechet = 0;
    for (int i = 0; i < n; ++i) {
        int tmp; cin >> tmp;
        if (tmp % 17 != 0) {
            if (tmp % 2 == 0) {
                chet = max(chet, tmp);
            } else {
                nechet = max(nechet, tmp);
            }
        } else {
            if (tmp % 2 == 0) {
                if (tmp > chet_17_1) {
                    chet_17_2 = chet_17_1;
                    chet_17_1 = tmp;
                } else {
                    if (tmp > chet_17_2) {
                        chet_17_2 = tmp;
                    }
                }
            } else {
                if (tmp > nechet_17_1) {
                    nechet_17_2 = nechet_17_1;
                    nechet_17_1 = tmp;
                } else {
                    if (tmp > nechet_17_2) {
                        nechet_17_2 = tmp;
                    }
                }
            }
        }
    }

    int chet1 = 0, chet2 = 0, nechet1 = 0, nechet2 = 0;
    if (chet_17_2 >= chet) {
        chet2 = chet_17_2;
    } else {
        chet2 = chet;
    }
    if (nechet_17_2 >= nechet) {
        nechet2 = nechet_17_2;
    } else {
        nechet2 = nechet;
    } 

    if (chet1 + chet2 >= nechet1 + nechet2 && chet1 && chet2) {
        cout << chet1 << ' ' << chet2 << '\n';
    } else {
        if (nechet1 && nechet2) {
            cout << nechet1 << ' ' << nechet2 << '\n';
        } else {
            cout << "0 0\n";
        }
    }
}