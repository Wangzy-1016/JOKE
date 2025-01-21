#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 500 + 10;

i64 a[INF][INF], tmp[INF][INF];
i64 n, m;

void rotate(i64 x, i64 y, i64 r) {
    //表示顺时针旋转
    for (i64 i = 1; i <= n; ++i) {
        for (i64 j = 1; j <= n; ++j) {
            tmp[i][j] = a[i][j];
        }
    }

    for (i64 i = x - r; i <= x + r; ++i) {
        for (i64 j = y - r; j <= y + r; ++j) {
            tmp[i][j] = a[x + y - j][y - x + i];
        }
    }
    for (i64 i = 1; i <= n; ++i) {
        for (i64 j = 1; j <= n; ++j) {
            a[i][j] = tmp[i][j];
        }
    }
}

void solve() {
    i64 idx = 0;
    cin >> n >> m;

    for (i64 i = 1; i <= n; ++i) {
        for (i64 j = 1; j <= n; ++j) {
            a[i][j] = ++idx;
        }
    }

    while (m--) {
        i64 x, y, r, z;
        cin >> x >> y >> r >> z;
        if (z == 0) {
            rotate(x, y, r);
        } else {
            for (int i = 1; i <= 3; ++i) {
                rotate(x, y, r);
            }
        }
    }

    for (i64 i = 1; i <= n; ++i) {
        for (i64 j = 1; j <= n; ++j) {
           cout<<a[i][j]<<" \n"[j==n];
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int _ = 1;
    while (_--) {
        solve();
    }
}