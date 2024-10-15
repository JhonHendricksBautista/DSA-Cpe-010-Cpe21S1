#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insert_val(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* find_mid(Node* start, Node* end) {
    if (!start) return nullptr;
    Node* slow = start;
    Node* fast = start;
    while (fast != end && fast->next != end) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int binarySearch(Node* head, int target) {
    Node* left = head;
    Node* right = nullptr;

    while (left != right) {
        Node* mid = find_mid(left, right);

        if (mid->data == target) {
            return mid->data;
        }
        if (mid->data < target) {
            left = mid->next;
        } else {
            right = mid;
        }
    }

    return -1;  
}

int main() {
    Node* head = nullptr;

    insert_val(head, 2);
    insert_val(head, 3);
    insert_val(head, 5);
    insert_val(head, 7);
    insert_val(head, 9);
    insert_val(head, 10);
    insert_val(head, 11);
    insert_val(head, 12);
    insert_val(head, 12);
    insert_val(head, 32);

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(head, target);

    if (result != -1) {
        cout << "Number '" << result <<"' is in the linked list"<< endl;
    } else {
        cout << "Number not found in the linked list." << endl;
    }

    return 0;
}
