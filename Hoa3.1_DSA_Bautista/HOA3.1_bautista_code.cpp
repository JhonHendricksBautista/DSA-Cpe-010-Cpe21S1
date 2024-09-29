#include <iostream>
using namespace std;

class Node {
public:
    char data;
    Node *next;
};

void traversal(Node* temp) {
    Node* current = temp;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void insertAtHead(char data, Node*& head) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(char data, int position, Node*& head) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < position - 1; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtTail(char data, Node*& head) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteNode(char key, Node*& head) {
    Node* temp = head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key) {
        head = temp->next; 
        delete temp;       
        return;
    }

    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        return;
    }

    prev->next = temp->next;
    delete temp; 
}

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;
    Node *last = NULL;

    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;
    last = new Node;

    head->data = 'C';
    head->next = second;
    second->data = 'P';
    second->next = third;
    third->data = 'E';
    third->next = fourth;
    fourth->data = '0';
    fourth->next = fifth;
    fifth->data = '1';
    fifth->next = last;
    last->data = '0';
    last->next = nullptr;

    cout << "Original List: ";
    traversal(head);

    insertAtHead('G', head);
    cout << "After Insert at Head: ";
    traversal(head);

    insertAtPosition('E', 3, head);
    cout << "After Insert at Position 3: ";
    traversal(head);

    deleteNode('C', head);
    cout << "After Deleting: ";
    traversal(head);
    
    deleteNode('P', head);
    cout << "After Deleting: ";
    traversal(head);

    return 0;
}
