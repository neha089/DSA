#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize top to -1 indicating an empty stack
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow: Cannot push element " << value << ", stack is full." << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed element: " << value << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop element, stack is empty." << endl;
            return;
        }
        
    }

    int peek(int index) {
        if (isEmpty() && index <=top) {
            cout << "Stack is empty. or out of index" << endl;
            return -1;
        }
        return arr[index];
    }

    void change(int position, int value) {
        if (position < 0 || position > top) {
            cout << "Invalid position." << endl;
            return;
        }
        arr[position] = value;
        cout << "Changed element at position " << position << " to " << value << endl;
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    

    stack.pop();
    stack.pop();
   cout<< stack.peek(2);

    cout << stack.peek(1) << endl;

    stack.change(0, 20);
    stack.change(2, 25);

    cout << stack.peek(5) << endl;

    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
