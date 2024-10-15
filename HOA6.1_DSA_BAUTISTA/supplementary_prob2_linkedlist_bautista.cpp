#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insert(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}



int countInstancesLinkedList(Node* head, int key) {
    int count = 0;
    Node* current = head;
    while (current) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count; // Return the count of instances
}

int main() {
    Node* head = nullptr;
    int values[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};

    for (int i = 9; i >= 0; --i) { // Insert values in reverse order
        insert(head, values[i]);
    }

    int key = 18;
    int count = countInstancesLinkedList(head, key);
    cout << "Count of instances (Linked List): " << count << endl;

    return 0;
}
