#include<bits/stdc++.h>
using namespace std;

string s1;

int main() {
    int n, l;
    cin >> n;
    bool flag = true;
    while (cin>>l){
        if (flag) {
            for (int i = 1; i <= l; i++) {
                s1.append("0");
            }
            flag = false;
        } else {
            for (int i = 1; i <= l; i++) {
                s1.append("1");
            }
            flag = true;
        }
    }
    for (int i = 0; i < s1.length(); i++) {
        cout << s1[i];
        if (i % n == n-1) {
            cout << endl;
        }
    }
}
