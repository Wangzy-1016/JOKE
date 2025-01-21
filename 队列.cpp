// operate
// 1.push
// 2.pop
// 3.size
// 4.front
#include <bits/stdc++.h>

using namespace std;

struct myqueue {
    int arr[100005], head, tail;

    myqueue() {
        head = 1;
        tail = 0;
    }

    int size() {
        return tail - head + 1;
    }

    void push(int num) {
        arr[++tail] = num;
    }

    void pop() {
        head++;
    }

    int front() {
        return arr[head];
    }

    void print() {
        for (int i = head; i <= tail; i++) {
            cout << arr[i] << "\n"[i == tail];
        }
    }
};

int main() {
    myqueue q;

    string command;
    while (true) {
        cin >> command;
        if (command == "quit") {
            break;
        } else if (command == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if (command == "pop") {
            q.pop();
        } else if (command == "front") {
            cout << "front is " << q.front() << '\n';
        } else if (command == "print") {
            q.print();
        } else if (command == "size") {
            cout<<q.size();
        } else {
            cout << "Invalid input!" << '\n';
        }
    }
}
