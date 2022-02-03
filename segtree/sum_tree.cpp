#include <vector>
#include <iostream>

using namespace std;

struct segtree
{
    vector<long long> tree;

    int size = 1;
    void init(int n)
    {
        while (size < n) size *= 2; // дополняем массив нулями
        tree.assign(2 * size - 1, 0); // строим дерево
    }

    void set(int x)

    void set(int idx, int val) 
    {
        
    }
};

int main()
{
    int n, m; cin >> n >> m;
    segtree st;
    st.init(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < m; ++i) {
        int type; cin >> type;
        if (type == 1) {
            int i, v; cin >> i >> v;
            // TODO
        } else {
            int l, r; cin >> l >> r;
            // TODO
        }
    }

}