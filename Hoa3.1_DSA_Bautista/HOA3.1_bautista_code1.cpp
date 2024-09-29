#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;
};

void traversal(Node* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtHead(int value, Node*& head) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(int value, Node*& head) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtAnyPosition(int value, Node*& head, int position) {
    Node* newNode = new Node();
    newNode->value = value;

    Node* current = head;
    for (int i = 1; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position is out of bounds" << endl;
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != nullptr) {
        current->next->prev = newNode;
    }

    current->next = newNode;
}

void deleteNode(int value, Node*& head) {
    Node* current = head;

    while (current != nullptr) {
        if (current->value == value) {
            if (current == head) {
                head = current->next;
                if (head != nullptr) {
                    head->prev = nullptr;
                }
            } else {
                current->prev->next = current->next;
                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                }
            }
            delete current;
            return;
        }
        current = current->next;
    }
    cout << "Node with value " << value << " not found" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(0, head);
    insertAtEnd(1, head);
    insertAtEnd(2, head);
    insertAtEnd(3, head);

    traversal(head);

    insertAtHead(4, head);
    traversal(head);

    insertAtEnd(5, head);
    traversal(head);

    insertAtAnyPosition(6, head, 3);
    traversal(head);

    deleteNode(6, head);
    traversal(head);

    return 0;
}
