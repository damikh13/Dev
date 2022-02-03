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
    for (int i = 1; i <= n; ++i) {
        int num; cin >> num;
        if (num == 0) {
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

    map<int, int> topics;
    // topics[0] = -1;
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] != 0) {
            ++topics[a[i]];
        }
    }

    int top_topic = max_element(topics.begin(), topics.end(), 
        [](pair<int, int> a, pair<int, int> b){ return a.second < b.second; })->first;

    if (topics.empty()) {
        cout << names[0] << '\n';
    } else {
        cout << names[--top_topic] << '\n';
    }

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