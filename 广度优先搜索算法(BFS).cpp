#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

vector<int> edge[N];
bool vis[N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v), edge[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        for (int i = 1; i <= n; i++) {
            vis[i] = 0;
        }
    queue<int> q;
    q.push(1); //放入起点
    vis[1] = 1; //当一个点被放入队列时,就打上标记


    while (!q.empty()) {
        int now = q.front(); //当前访问的点即为队首元素
        cout << "BFS:" << now << '\n';
        q.pop(); //从队列弹出队首元素
        for (int to: edge[now]) {
            //访问now的所有相邻的点,就放入队列并打上标记
            if (!vis[to]) {
                q.push(to);
                vis[to] = 1;
            }
        }
    }
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
