#include<bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
vector<int> edge[N];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v), edge[v].push_back(u);
    }
    int now;
    cin >> now;
    //遍历相邻"now"所有相邻的点
    for (int to: edge[now]) {//新语法:在vector / map / set 中可以使用这段代码遍历整个容器
        cout << now << "->" << to << '\n';
    }
    return 0;
}
