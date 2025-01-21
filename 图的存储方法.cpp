#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

struct EDGE {
    int u, v;
} edge[N];

int main() {
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> edge[i].u >> edge[i].v;
    }
    for (int i = 1; i <= m; i++) {
        cout << edge[i].u << "<-->" << edge[i].v << '\n';
    }
    return 0;
}
