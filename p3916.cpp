#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

vector<int> edge[N];
bool vis[N];
int maX = 0;

void dfs(int u) {
    vis[u] = 1;
    maX = max(maX, u);
    for (int v: edge[u]) {
        if (vis[v]) {
            continue;
        } else dfs(v);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
    }
    for (int sta = 1; sta <= n; sta++) {
        for (int i = 1; i <= n; i++) {
            vis[i] = 0;
        }
        maX = 0;
        dfs[sta];
        cout << maX << " \n"[sta == n];
    }

    return 0;
}
