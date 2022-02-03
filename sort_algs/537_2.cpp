#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> names;
    vector<int> a(n + 1);
    for (int i = 1; i < n + 1; ++i) {
        int num; cin >> num;
        if (num == 0) {
            a[i] = 0;
            string name, message;
            getline(cin, name);
            getline(cin, name);
            names.push_back(name);
            getline(cin, message);
        } else {
            string message;
            getline(cin, message);
            getline(cin, message);
            // если относится к топику
            if (a[num] == 0) {
                a[i] = num;
            } else {
                a[i] = a[num];
            }
        }
    }
    sort(a.begin(), a.end());
    // надо найти самую частую цифру в массиве и выдать имя
    // vector<int> a = {0, 0, 0};
    // vector<string> names = {"topic 1", "topic 2"};
    // int n = a.size();
    int curr_len = 0;
    int max_len = -1;
    int best_el = -1;
    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] != 0) {
            if (a[i] == a[i + 1]) {
                ++curr_len;
            } else {
                if (curr_len + 1 > max_len) {
                    max_len = curr_len + 1;
                    best_el = a[i];
                }
                max_len = max(max_len, curr_len + 1);
                curr_len = 0;
            }
        }
    }
    if (curr_len + 1 > max_len) {
        max_len = curr_len + 1;
        best_el = a[n - 1];
    }
    // cout << best_el << '\n';
    if (best_el == 0) {
        cout << names[best_el] << '\n';
    } else {
        cout << names[best_el - 1] << '\n';
    }

    // for (int i = 0; i < names.size(); ++i) {
    //     cout << names[i] << '\n';
    // }
}

/*
10
0
t1 
mess1
0
t2
mess2
1
mess3 bein replied to mess1
3
mess4 bein replied to mess3
0
t3
mess5
4
mess6 bein replied to mess4
2
mess7 bein replied to mess2
7
mess8 bein replied to mess7
8
mess9 bein replied to mess8
9
mess10 bein replied to mess9
*/