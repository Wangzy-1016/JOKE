#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

i64 n;

void solve() {
    cin >> n;

    int ans = -1;
    int l = 1, r = 1e5;
    while (l <= r) {
        i64 mid = (l + r) / 2;
        if (mid * mid <= n) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}

