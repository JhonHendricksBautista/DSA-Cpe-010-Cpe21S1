#include <iostream>
#include <string>
using namespace std;

class Queue {
private:
    int front;
    int rear;
    int size;
    int capacity;
    string* arr;

public:
    Queue(int maxSize) {
        front = 0;
        rear = -1;
        size = 0;
        capacity = maxSize;
        arr = new string[capacity];
    }

    void enqueue(string name) {
        if (size == capacity) {
            cout << "Queue is full, cannot add more elements!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = name;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty, nothing to delete!" << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Students:" << endl;
        int count = size;
        int i = front;
        while (count > 0) {
            cout << arr[i] << endl;
            i = (i + 1) % capacity;
            count--;
        }
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int maxSize;
    cout << "Enter the maximum size of the queue: ";
    cin >> maxSize;
    cin.ignore();

    Queue queue(maxSize);
    string name;

    cout << "Enter the first name to insert in the queue: ";
    getline(cin, name);
    queue.enqueue(name);

    queue.enqueue("Dale");
    queue.enqueue("Kurt");
    queue.enqueue("Redj");

    queue.display();

    cout << "\nRemoving the first element...\n";
    queue.dequeue();

    queue.display();

    return 0;
}
