#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string num = to_string(n);
    int flag = 1;

    for (int i = 0; i < num.size() / 2; i++) {
        if (num[i] != num[num.size() - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "It's a palindrome";
    else
        cout << "No, it's not a palindrome";

    return 0;
}
