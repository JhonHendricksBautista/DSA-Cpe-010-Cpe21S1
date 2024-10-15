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

int sequentialSearchLinkedList(Node* head, int key) {
    int comparisons = 0;
    Node* current = head;
    while (current) {
        comparisons++;
        if (current->data == key) {
            return comparisons; 
        }
        current = current->next;
    }
    return comparisons; 
}

int main() {
    Node* head = nullptr;
    int values[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};

    for (int i = 9; i >= 0; --i) { 
        insert(head, values[i]);
    }

    int key = 18;
    int comparisons = sequentialSearchLinkedList(head, key);
    cout << "Number of comparisons (Linked List): " << comparisons << endl;

    return 0;
}
