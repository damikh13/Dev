#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> complementary;
    for (int i = 1; i < 10; ++i) {
        complementary[i] = 11 - i;
    }

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 5) {
        }
    }
}