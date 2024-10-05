#include <iostream>
using namespace std;

const size_t maxCap = 100;
int stack[maxCap];
int top = -1, i, newData;

void push();
void pop();
void Top();
bool isEmpty();
void display(); // New function to display all elements in the stack

int main() {
    int choice;
    cout << "Enter number of max elements for new stack: ";
    cin >> i;

    while (true) {
        cout << "\nStack Operations: " << endl;
        cout << "1. PUSH, 2. POP, 3. TOP, 4. isEMPTY, 5. DISPLAY" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: Top(); break;
            case 4: cout << (isEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl; break;
            case 5: display(); break; // Call the display function
            default: cout << "Invalid Choice. Please choose a valid option." << endl; break;
        }
    }
    return 0;
}

bool isEmpty() {
    return top == -1;
}

void push() {
    if (top == i - 1) {
        cout << "Stack Overflow." << endl;
        return;
    }
    cout << "Enter New Value: ";
    cin >> newData;
    stack[++top] = newData;
    cout << "Value " << newData << " pushed onto the stack." << endl;
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow." << endl;
        return;
    }
    cout << "Popping: " << stack[top] << endl;
    top--;
}

void Top() {
    if (isEmpty()) {
        cout << "Stack is Empty." << endl;
        return;
    }
    cout << "The element on the top of the stack is " << stack[top] << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is Empty." << endl;
        return;
    }

    cout << "Stack elements are: ";
    for (int j = top; j >= 0; j--) {
        cout << stack[j] << " ";
    }
    cout << endl;
}
