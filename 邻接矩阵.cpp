#include<bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
bool adj[N][N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = adj[v][u] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " \n"[j == n]; //if (j==n) cout<<"\n" else cout<<" "
        }
    }
}

