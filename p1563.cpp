#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

string str[INF];
bool d[INF];

void solve() {
    i64 n, m;
    cin >> n >> m;

    for (i64 i = 0; i < n; i++) {
        cin >> d[i] >> str[i];
    }

    int now = 0;
    while (m--) {
        int a, s;
        cin >> a >> s;
        if ((a ^ d[now]) == 1) {
            now = (now + s) % n;
        } else {
            now = (now - s + n) % n;
        }
    }
    cout<<str[now];
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