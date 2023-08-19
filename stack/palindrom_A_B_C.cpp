#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;

    s.push('c');

    char c;
    while ((c = getchar()) != 'c') {
        s.push(c);
    }

    c = getchar();

    while (!s.empty() && s.top() != 'c') {
        if (c == s.top()) {
            s.pop();
        }
        c = getchar();
    }

    if (s.top()=='c' && c == '\n') {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
