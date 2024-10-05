#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    char data;
    Node* next;
};

class Expression {
private:
    Node* top;
public:
    Expression() : top(nullptr) {}

    void push(char newData) {
        Node* newNode = new Node;
        newNode->data = newData;
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (isEmpty()) return '\0';
        char temp = top->data;
        Node* tempNode = top;
        top = top->next;
        delete tempNode;
        return temp;
    }

    char peek() {
        return (isEmpty()) ? '\0' : top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

bool opening_symbol(char ch) {
    return (ch == '(' || ch == '{' || ch == '[');
}

bool closing_symbol(char ch) {
    return (ch == ')' || ch == '}' || ch == ']');
}

bool matching_symbol(char opening, char closing) {
    return ((opening == '(' && closing == ')') ||
            (opening == '{' && closing == '}' ) ||
            (opening == '[' && closing == ']'));
}

bool balance_checking(const string& expression) {
    Expression expStack;
    for (char ch : expression) {
        if (opening_symbol(ch)) {
            expStack.push(ch);
        } else if (closing_symbol(ch)) {
            if (expStack.isEmpty()) return false;
            char top = expStack.pop();
            if (!matching_symbol(top, ch)) return false;
        }
    };
    return expStack.isEmpty();
}

int main() {
    string expression;
    while(true){
    cout << "Enter an expression containing only brackets: ";
    cin >> expression;

    if (balance_checking(expression)) {
        cout << "The expression has balanced symbols." << endl;
    } else {
        cout << "The expression has unbalanced symbols." << endl;
    }
};
    return 0;
}
