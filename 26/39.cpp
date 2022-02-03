#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, capacity; cin >> n >> capacity;

    int mass, cnt;
    mass = cnt = 0;

    vector<int> lasted;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x >= 180 && x <= 200) {
            // if el can be taken 
            if (capacity - x >= 0) {
                // then take it
                capacity -= x;
                mass += x;
                ++cnt;
            }
        } else {
            lasted.push_back(x);
        }
    }

    sort(lasted.begin(), lasted.end());

    int last_taken_idx = -1;
    // taking so that max_cnt
    for (int i = 0; i < lasted.size(); ++i) {
        int x = lasted[i];
        // if can be taken
        if (capacity - x >= 0) {
            // then take it 
            mass += x;
            capacity -= x;
            ++cnt;
            last_taken_idx = i;
        } else break;
    }

    // replacing last as much as we can
    int diff = 0;
    int start_from = lasted.size() - 1;
    for (int i = start_from; i >= last_taken_idx; --i) {
        int x = lasted[last_taken_idx - diff];
        int y = lasted[i];
        // if we can replace
        if (capacity + x - y >= 0 && x < y) {
            // then replace
            capacity = capacity + x - y;
            mass = mass - x + y;
            lasted[last_taken_idx - diff] = y;
            lasted[i] = x;
            ++diff;
            i = start_from;
        }
    }

    cout << cnt << ' ' << mass << '\n';
}