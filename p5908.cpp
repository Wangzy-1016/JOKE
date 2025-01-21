#include <bits/stdc++.h>

using namespace std;
using i64 = long long;

constexpr int N = 1e5 + 10;
vector<int> edge[N];
bool vis[N];
int depth[N];
int n, d, cnt = 0;

void dfs(int u, int fa) {
    vis[u] = true;
    for (int to: edge[u]) {
        if (to == fa) continue;
        depth[to] = depth[u] + 1;
        dfs(to, u);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> d;
    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v), edge[v].push_back(u);
    }
    for (int i = 1; i <= n + 10; i++) {
        vis[i] = false;
    }
    dfs(1, -1);
    for (int i = 1; i <= n; i++) {
        if (depth[i] <= d)
            cnt++;
    }
    cout << cnt-1 << '\n';
}
