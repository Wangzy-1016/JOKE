#include <iostream>
#include <vector>


void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 1);
    for (int i = 0; i <= n; i++) {
        std::cin >> a[i];
    }

    bool firstTerm = true;
    for (int i = 0; i <= n; i++) {
        if (a[i] == 0) continue;
        std::string sign = (a[i] < 0)? "-" : (a[i] > 0 &&!firstTerm)? "+" : "";
        int absCoefficient = std::abs(a[i]);
        std::string term;
        if (i == n) {
            term = (absCoefficient == 1)? "1" : std::to_string(absCoefficient);
        } else if (i == n - 1) {
            term = (absCoefficient == 1)? "x" : std::to_string(absCoefficient) + "x";
        } else {
            term = (absCoefficient == 1)? "x^" + std::to_string(n - i) : std::to_string(absCoefficient) + "x^" + std::to_string(n - i);
        }
        std::cout << sign << term;
        firstTerm = false;
    }
    std::cout << '\n';
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
    return 0;
}