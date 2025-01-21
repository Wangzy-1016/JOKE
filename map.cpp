#include<iostream>
#include<map>

int main() {
    int n;
    std::cin >> n;
    std::map<long long, int> m;
    for (int i = 1; i <= n; i++) {
        long long x;
        std::cin >> x;
        m[x]++;
    }
    int q;
    std::cin >> q;
    while (q--) {
        long long x;
        std::cin >> x;
        std::cout << m[x];
    }
    return 0;
}