#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;

int main() {
    vector<int> vec1;
    //存储
    vec1.push_back(100);
    vec1.push_back(200);
    vec1.push_back(300);
    for (int i = 0; i < 3; i++) { //打印
        cout << vec1[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < 3; i++) { //修改
        vec1[i] = 500;
    }
    //输入
    //在初始状态下，它是空的，不能在其中存储元素
    //因此，我们可以设置一个大小为10的vector，把所有元素设置为0
    vector<int> vec2(10, 0);
    //还可以输出它的大小
    cout << vec2.size() << '\n';
    //新语法:在vector / map / set 中可以使用这段代码遍历整个容器
    for (int i: vec1) { //遍历vec1
        cout << vec1[i] << " ";
    }
    return 0;
}
