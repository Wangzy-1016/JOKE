#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;
int fa[INF];

int find(int x) {
    if (fa[x] == x) return x;
    return fa[x] = find(fa[x]);
}

void merge(i64 x, i64 y) {
    i64 fx = find(x);
    i64 fy = find(y);
    fa[fx] = fy;
}

bool query(i64 x, i64 y) {
    return find(x) == find(y);
}

int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
    }
    while (m--) {
        i64 x, y, z;
        cin >> z >> x >> y;
        if (z == 1) {
            merge(x, y);
        } else {
            cout << (query(x, y) ? "Y" : "N") << '\n';
        }
    }
}
