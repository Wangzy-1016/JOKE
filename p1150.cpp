#include <iostream>
#include <algorithm>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int lengths[4] = {a, b, c, d};
    std::sort(lengths, lengths + 4);
    bool is_triangle = false;
    // 检查是否能构成正常三角形（非退化三角形）
    for (int i = 0; i < 2; ++i) {
        if (lengths[i] + lengths[i + 1] > lengths[i + 2]) {
            is_triangle = true;
            break;
        }
    }
    if (is_triangle) {
        std::cout << "TRIANGLE" << std::endl;
        return 0;
    } else {
        bool is_degenerate = false;

        for (int i = 0; i < 2; ++i) {
            if (lengths[i] + lengths[i + 1] == lengths[i + 2]) {
                is_degenerate = true;
                break;
            }
        }
        if (is_degenerate) {
            std::cout << "SEGMENT" << std::endl;
        } else {
            std::cout << "IMPOSSIBLE" << std::endl;
        }
    }
}