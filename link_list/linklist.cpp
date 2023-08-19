#include <iostream>
using namespace std;

class Node {
    int data;
    Node* next;

public:
    Node(int val) {
        data = val;
        next = NULL;
    }

    void insertBegin(Node*& head) {
        int val;
        cin >> val;
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
        cout << "Inserted at the beginning" << endl;
    }

    void insertEnd(Node*& head) {
        int val;
        cin >> val;
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        cout << "Inserted at the end" << endl;
    }

    void insertAfter(Node*& head, int val) {
        int insertVal;
        cin >> insertVal;
        Node* new_node = new Node(insertVal);
        Node* ptr = head;
        while (ptr != NULL && ptr->data != val) {
            ptr = ptr->next;
        }
        if (ptr == NULL) {
            cout << "Value not found in the list." << endl;
            return;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
        cout << "Inserted after " << val << endl;
    }

    void insertBefore(Node*& head, int val) {
        int insertVal;
        cin >> insertVal;
        Node* new_node = new Node(insertVal);
        if (head == NULL) {
            cout << "List is empty. Cannot insert before the value." << endl;
            return;
        }
        if (head->data == val) {
            new_node->next = head;
            head = new_node;
            cout << "Inserted before " << val << endl;
            return;
        }
        Node* ptr = head;
        while (ptr->next != NULL && ptr->next->data != val) {
            ptr = ptr->next;
        }
        if (ptr->next == NULL) {
            cout << "Value not found in the list." << endl;
            return;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
        cout << "Inserted before " << val << endl;
    }

    void deleteBegin(Node*& head) {
        if (head == NULL) {
            cout << "List is empty. No elements to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted from the beginning" << endl;
    }

    void deleteEnd(Node*& head) {
        if (head == NULL) {
            cout << "List is empty. No elements to delete." << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            cout << "Deleted from the end" << endl;
            return;
        }
        Node* ptr = head;
        while (ptr->next->next != NULL) {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = NULL;
        cout << "Deleted from the end" << endl;
    }

    void deleteAfter(Node*& head, int val) {
        Node* ptr = head;
        while (ptr != NULL && ptr->data != val) {
            ptr = ptr->next;
        }
        if (ptr == NULL) {
            cout << "Value not found in the list." << endl;
            return;
        }
        if (ptr->next == NULL) {
            cout << "No element after " << val << ". Cannot delete." << endl;
            return;
        }
        Node* temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
        cout << "Deleted after " << val << endl;
    }

    void display(Node* head) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    Node* head = NULL;
    Node n1(2);
    int n, val;
    while (1) {
        cin >> n;
        switch (n) {
            case 1:
                n1.insertBegin(head);
                break;
            case 2:
                n1.insertEnd(head);
                break;
            case 3:
                cin >> val;
                n1.insertAfter(head, val);
                break;
            case 4:
                cin >> val;
                n1.insertBefore(head, val);
                break;
            case 5:
                n1.deleteBegin(head);
                break;
            case 6:
                n1.deleteEnd(head);
                break;
            case 7:
                cin >> val;
                n1.deleteAfter(head, val);
                break;
            case 8:
                n1.display(head);
                break;
            case 9:
                exit(0);
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    return 0;
}
