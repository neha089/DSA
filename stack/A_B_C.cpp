#include <iostream>
#include <stack>
using namespace std;



int main() {
    stack<char> s;

    s.push('d');

    char c;
    
    while ((c = getchar()) != 'c') {
        if(c=='a' &&(s.top()=='a' || s.top()=='d'))
        s.push(c);
        else if(c=='b' &&(s.top()=='a' || s.top()=='d'))
        s.push(c);
    }
    c=getchar();

       while ((c = getchar()) != '\n') {
        if (c == 'c'  && (s.top() == 'a' || s.top() == 'b')) {
            s.pop();
        } else {
            break;
        }
    }
    // while (!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    
    if (s.empty() && c == '\n') {
        cout << "Right" << endl;
    } else {
        cout << "Not Right" << endl;
    }
    
    return 0;
}
