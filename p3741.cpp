#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = 0;
    bool isok = false;
    for (int i = 1; i < n; i++) {
        if (str[i - 1] == 'V' && str[i] == 'K') {
            ans++;
            str[i - 1] = str[i] = 'A';
        }
    }
    for (int i = 1; i < n; i++) {
        if (str[i - 1] == 'V' && str[i] == 'V') {
            isok = true;
        }
        if (str[i - 1] == 'K' && str[i] == 'K') {
            isok = true;
        }
    }
    cout << ans + isok << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}