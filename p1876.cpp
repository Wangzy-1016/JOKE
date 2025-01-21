#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

void solve() {
    i64 n;
    cin >> n;
    for (i64 i = 1; i * i <= n; i++) {
        cout << i * i << " ";
    }
    cout << " \n";
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