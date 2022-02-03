#include <iostream>
#include <vector>

using namespace std;

int Max(int a, int b, int c) {
    return ::max(::max(a, b), c);
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    int even_max = -1, odd_max = -1;
    int max_product = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= 9) {
            if (a[i - 9] % 2 == 0) {
                even_max = max(a[i - 9], even_max);
            } else {
                odd_max = max(a[i - 9], odd_max);
            }
            if (a[i] % 2 == 0) {
                max_product = Max(max_product, a[i] * odd_max, a[i] * even_max);
            } else {
                max_product = max(max_product, a[i] * even_max);
            }
        } 
    }

    cout << max_product << '\n';
}