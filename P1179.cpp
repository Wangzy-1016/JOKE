#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;
char ch[INF];
int x,ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int L, R;
    cin >> L >> R;
    for (int i = L; i <= R; i++) {
        x = i;
        while (x > 0) {
            if (x % 10 == 2)ans++;
            x /= 10;
        }
    }
    cout<<ans<<'\n';
}