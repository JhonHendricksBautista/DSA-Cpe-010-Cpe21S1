// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Node{
    public: 
    int value;
    Node* next;
};


int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    
    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();
    
    //assign value values
    one-> value = 1;
    two-> value = 2;
    three-> value = 3;
    
    //connect nodes
    one-> next = two;
    two-> next = three;
    three-> next = NULL;
    
    //print the linked list
    head = one;
    while(head!=NULL){
        cout<< head-> value<<endl;
        head = head-> next;
    }
    
    return 0;
}