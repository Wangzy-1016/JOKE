// stack operate
/*
1.push   put data in the top-stack
2.pop    take out the top-stack
3.size   return stack size
4.top    back to the top-stack
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 10;

struct myStack {
    int siz;
    int arr[N];

    myStack() {
        siz = 0;
    }

    int size() {
        return siz;
    }

    void push(int num) {
        arr[++siz] = num;
    }

    void pop() {
        siz--;
    }

    int top() {
        return arr[siz];
    }

    void print() {
        for (int i = siz; i >= siz; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    myStack stk;
    while (true) {
        string command;
        cin >> command;
        if (command == "quit") {
            break;
        } else if (command == "push") {
            int data;
            cin >> data;
            stk.push(data);
        } else if (command == "pop") {
            stk.pop();
        } else if (command == "size") {
            cout << stk.size() << endl;
        } else if (command == "top") {
            cout << stk.top() << endl;
        } else {
            cout << "ERROR INPUT" << endl;
        }
    }
    return 0;
}
