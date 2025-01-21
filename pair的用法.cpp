#include <bits/stdc++.h>

using namespace std;

constexpr int N = 1e3 + 10;

int main() {
    vector <std::pair<int, int>> vec;
    vec.push_back({1, 1});
    vec.push_back({10, 2});
    vec.push_back({2, 1});
    vec.push_back({2, 2});
    // pair 排序的方式：first 为第一关键字
    //                second 为第二关键字
    sort(vec.begin(), vec.end());
    for (pair<int, int> p: vec) {
        cout << p.first << " " << p.second << '\n';
    }

    return 0;
}
