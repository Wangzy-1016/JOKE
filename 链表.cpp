#include <bits/stdc++.h>

using namespace std;

// 定义链表节点结构体
struct NODE {
    int data; // 存储节点的数据
    NODE *next; // 指向下一个节点的指针
};

// 定义链表结构体
struct  LINKLIST {
    NODE *head; // 链表的头节点指针
    int len; // 链表的长度

    // 链表的构造函数，用于初始化链表
    LINKLIST() {
        // 使用 new 运算符分配内存给头节点
        head = new NODE();
        len = 0;
        // 初始化头节点的数据和指针
        head->data = 0;
        head->next = nullptr;
    }

    // 创建新节点的函数
    NODE *createNode(int date) {
        // 使用 new 运算符分配内存给新节点
        NODE *node = new NODE();
        // 初始化新节点的数据和指针
        node->data = date;
        node->next = nullptr;
        return node;
    }

    // 在指定位置插入节点的函数
    void insert(int pos, const int data) {
        // 对位置进行范围检查，避免越界
        if (pos < 0 || pos > len) {
            cout << "Invalid position." << endl;
            return;
        }
        // 从链表头开始的指针
        NODE *ptr = head;
        // 找到要插入位置的前一个节点
        for (int i = 0; i < pos; i++) {
            ptr = ptr->next;
        }
        // 创建要插入的新节点
        NODE *newNode = createNode(data);
        // 新节点的下一个节点指向原位置的节点
        newNode->next = ptr->next;
        // 原位置的前一个节点指向新节点
        ptr->next = newNode;
        // 链表长度加 1
        len++;
    }

    // 打印链表元素的函数
    void print() {
        // 从链表头的下一个节点开始，因为头节点通常不存储数据
        NODE *ptr = head;
        for (int i = 1; i <= len; i++) {
            ptr = ptr->next;
            cout << ptr->data;
            if (i != len) {
                cout << "->";
            } else {
                cout << '\n';
            }
        }
    }

    // 从链表中删除节点的函数
    void erase(int pos) {
        // 从链表头开始遍历找a到要删除节点的前一个节点
        NODE *ptr = head;
        for (int i = 1; i < pos; i++) {
            ptr = ptr->next;
        }
        // 存储要删除节点的前一个节点指针
        NODE *preptr = ptr;
        // 存储要删除的节点指针
        NODE *nowptr = preptr->next;
        // 存储要删除节点的下一个节点指针
        NODE *postptr = nowptr->next;
        // 将要删除节点的前一个节点的 next 指针指向要删除节点的下一个节点
        preptr->next = postptr;
        // 释放要删除节点的内存，注意：这里使用 free 会导致未定义行为，应该使用 delete
        free(nowptr);
        // 链表长度减 1
        len--;
    }
};

int main() {
    // 创建一个链表对象
    LINKLIST linklist;
    // 进入一个无限循环，处理用户输入的命令
    while (true) {
        string command;
        cin >> command;
        // 如果命令是 quit，则退出循环
        if (command == "quit") {
            break;
        } else if (command == "insert") {
            int pos, date;
            cin >> pos >> date;
            // 调用插入节点的函数，在指定位置插入节点
            linklist.insert(pos, date);
        } else if (command == "print") {
            // 调用打印链表的函数，打印链表元素
            linklist.print();
        } else if (command == "erase") {
            int pos;
            cin >> pos;
            linklist.erase(pos);
        }
    }
    return 0;
}
