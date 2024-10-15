#include <iostream>
using namespace std;


template <typename T>
class Node {
    public:
        T data;     
        Node* next;    


        Node* new_node(T newData) {
            Node* newNode = new Node();  
            newNode->data = newData;    
            newNode->next = NULL;    
            return newNode;    
        }
};


template <typename T>
Node<T>* linearLS(Node<T>* head, T dataFind) {
    Node<T>* current = head;  
    while (current != NULL) {
        if (current->data == dataFind) {
            return current;  
        }
        current = current->next;  
    }

    return NULL;  
}

int main() {
    Node<char> node;  

    Node<char>* name1 = node.new_node('J');
    Node<char>* name2 = node.new_node('h');
    Node<char>* name3 = node.new_node('o');
    Node<char>* name4 = node.new_node('n');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = NULL; 

    char dataFind;
    cout << "Enter character to search for: ";
    cin >> dataFind;

    Node<char>* result = linearLS(name1, dataFind);

    if (result != NULL) {
        cout<< "Character '"<<dataFind<<"' found in the list." <<endl;
    } else {
        cout<<"Character '" << dataFind << "' not found in the list."<< endl;
    }

    return 0;
}
