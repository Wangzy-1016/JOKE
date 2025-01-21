#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e4 + 10;

struct POINT {
    int x, y;
    bool isBorn;
} point[INF];

int range_(int x1, int x2, int y1, int y2) {
    return int(pow(x1 - x2, 2)) + int(pow(y1 - y2, 2));
}

void solve() {
    int n, k, t;
    cin >> n >> k >> t;

    for (int i = 1; i <= n; i++) {
        cin >> point[i].x >> point[i].y;
        point[i].isBorn = 0;
    }

    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = 1; j <= n; j++) {
            if (point[j].x == x && point[j].y == y) {
                point[j].isBorn = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= t; i++) {
        int x, y;
        cin >> x >> y;
        int dis = 0, maxi = -1;
        for (int j = 1; j <= n; j++) {
            if (range_(point[j].x, x, point[j].y, y) > dis) {
                dis = range_(point[j].x, x, point[j].y, y);
                maxi = j;
            }
        }
        cnt += point[maxi].isBorn;
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
    }
}