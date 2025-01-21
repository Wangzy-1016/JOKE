#include <bits/stdc++.h>

using i64 = long long;

struct NODE {
    i64 data;
    NODE* pre, *next;
};

struct LINKLIST {
    NODE* head, *tail;
    int length;

    LINKLIST () {
        head = createNode(NULL), tail = createNode(NULL);
        head->next = tail, tail->pre = head;
        length = 0;
    }

    NODE* createNode (i64 data) {
        NODE* node = (NODE*)malloc(sizeof(NODE));
        *node = {data, nullptr, nullptr};
        return node;
    }

    void insert(int pos, i64 data) {
        // 在 pos 与 pos + 1 之间插入节点（新节点的序号为 pos + 1）
        assert(pos <= length);
        NODE* ptr = head;
        for (int i = 1; i <= pos; i++) {
            ptr = ptr->next;
        }
        NODE* newNode = createNode(data);
        newNode->next = ptr->next, newNode->pre = ptr;
        ptr->next->pre = newNode, ptr->next = newNode;
        length++;
    }

    void erase(int pos) {
        assert(pos <= length);
        NODE* ptr = head;
        for (int i = 1; i <= pos; i++) {
            ptr = ptr->next;
        }
        ptr->pre->next = ptr->next, ptr->next->pre = ptr->pre;
        free(ptr);
        length--;
    }

    std::vector<int> find(i64 data) {
        std::vector<int> res;
        NODE* ptr = head;
        for (int i = 1; i <= length; i++) {
            ptr = ptr->next;
            if (ptr->data == data) {
                res.push_back(i);
            }
        }
        return res;
    }

    void clear() {
        while (length) {
            erase(1);
        }
    }

    void print() {
        NODE* ptr = head;
        std::cout << "head -> ";
        for (int i = 1; i <= length; i++) {
            ptr = ptr->next;
            std::cout << ptr->data << " -> ";
        }
        std::cout << "tail\n";
    }
};

void solve() {
    std::string command;
    LINKLIST linkList;
    while (1) {
        std::cout << ">>> ";
        std::cin >> command;
        if (command == "quit") {
            break;
        } else if (command == "insert") {
            int pos;
            i64 data;
            std::cin >> pos >> data;
            linkList.insert(pos, data);
        } else if (command == "erase") {
            int pos;
            std::cin >> pos;
            linkList.erase(pos);
        } else if (command == "find") {
            i64 data;
            std::cin >> data;
            std::cout << "<<< ";
            for (const auto& num : linkList.find(data)) {
                std::cout << num << " ";
            }
            std::cout << '\n';
        } else if (command == "clear") {
            linkList.clear();
        } else if (command == "print") {
            std::cout << "<<< ";
            linkList.print();
        } else {
            std::cerr << "Error: Invalid input!" << '\n';
        }
    }
}

int main() {

    solve();

    return 0;
}

/*
insert 0 100
insert 1 200
insert 2 300
insert 3 900
print
find 200
insert 2 200
find 200
print
erase 3
print
quit
*/