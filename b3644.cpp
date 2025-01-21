#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
vector<int> edge[N];
int inna[N], outa[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int u;
        while (true) {
            cin >> u;
            if (u == 0) {
                break;
            } else {
                edge[i].push_back(u);
                inna[u]++;
            }
        }

    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (inna[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        cout << now << " ";
        for (int to: edge[now]) {
            inna[to]--;
            if (inna[to] == 0) {
                q.push(to);
            }
        }
    }
    return 0;
}
