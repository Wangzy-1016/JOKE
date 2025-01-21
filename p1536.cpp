#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
constexpr int INF = 1e5 + 10;
int fa[INF];

int find(int x) {
    if (fa[x] == x) return x;
    return fa[x] = find(fa[x]);
}

void merge(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    fa[fx] = fy;
}

bool query(int x, int y) {
    return find(x) == find(y);
}

int main() {
    ios_base::sync_with_stdio(false);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0) {
            break;
        }
        for (int i = 1; i <= n; i++) {
            fa[i] = i;
        }
        for (int i = 1; i <= m; i++) {
            int x, y;
            cin >> x >> y;
            merge(x, y);
        }
        set<int> s;
        for (int i = 1; i <= n; i++) {
            s.insert(find(i));
        }
        cout << (int) s.size() - 1 << '\n';
    }
}
