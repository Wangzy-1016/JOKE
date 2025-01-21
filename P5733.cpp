#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

void solve() {
    string str;
    cin >> str;
    for (char i: str) {
        if (i >= 'a' && i <= 'z') {
            i += 'A' - 'a';
        }
        cout << i;
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