#include <bits/stdc++.h>

using namespace std;
using i64 = long long;
using vi = vector<i64>;
constexpr i64 INF = 1e5 + 10;

void solve() {
    int q;
    cin >> q;
    string str;
    cin >> str;

    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            string s1;
            cin >> s1;
            str += s1;
            cout << str << "\n";
        } else if (op == 2) {
            int a, b;
            cin >> a >> b;
            str = str.substr(a, b);
            cout << str << '\n';
        } else if (op == 3) {
            int a;
            string s2;
            cin >> a >> s2;
            str.insert(a, s2);
            cout<<str<<"\n";
        } else if (op == 4) {
            string s3;
            cin >> s3;
            auto pos = str.find(s3);
            if (pos == string::npos) {
                cout << "-1" << "\n";
            } else cout << pos << "\n";
        }
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