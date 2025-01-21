#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

vector<int> edge[N];
bool vis[N];

void dfs(int u) {
    cout << "dfs(" << u << ")\n";
    vis[u] = 1;
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
        edge[u].push_back(v), edge[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        vis[i] = 0;
    }
    dfs(1);
    return 0;
}
//input
/*
12 11
1 2
1 3
1 4
1 5
2 7
3 8
4 9
7 10
10 11
11 12
4 6
*/
