#include <iostream>
#include <vector>

int main() {
    freopen("dic.txt","w",stdout);
    std::vector<int> dictionary;
    for (int i = 0; i < 100000000; ++i) {
        dictionary.push_back(i);
    }
    for (int num : dictionary) {
        std::cout << num;
    }
    return 0;
}