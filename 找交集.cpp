#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

vi vec[INF];
int n;
int ansl = -1e9, ansr = 1e9;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;
        ansl = max(ansl, l), ansr = min(ansr, r);
    }
    if (ansl > ansr) {
        cout << -1 << '\n';
    } else {
        cout << ansl << " " << ansr << '\n';
    }
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