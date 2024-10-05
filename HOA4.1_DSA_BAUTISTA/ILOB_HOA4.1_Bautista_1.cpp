#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node *head = NULL, *tail = NULL;

void push(int newData) {
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

int pop() {
    int tempVal;
    Node *temp;
    if (head == NULL) {
        head = tail = NULL;
        cout << "Stack Underflow." << endl;
        return -1;
    } else {
        temp = head;
        tempVal = temp->data;
        head = head->next;
        delete (temp);
        return tempVal;
    }
}

void Top() {
    if (head == NULL) {
        cout << "Stack is Empty." << endl;
        return;
    } else {
        cout << "Top of Stack: " << head->data << endl;
    }
}

int main() {
    push(1);
    cout << "After the first PUSH, top of stack is: ";
    Top();

    push(5);
    cout << "After the second PUSH, top of stack is: ";
    Top();

    pop();
    cout << "After the first POP operation, top of stack is: ";
    Top();

    pop();
    cout << "After the second POP operation, top of stack is: ";
    Top();

    pop();

    return 0;
}
