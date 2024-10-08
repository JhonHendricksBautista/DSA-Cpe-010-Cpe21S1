#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Node{
    
    public:
    Node* next;
    string name;
};

void traversal(Node* head){
    cout<<"Students"<<endl;
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> name<<endl;
        temp = temp -> next;
    }
};

void insert_item(string name, Node*& head){
    Node* newNode = new Node();
    newNode -> name = name;
    newNode -> next = nullptr;
    
    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
        
    }
    temp -> next = newNode;
    
}

void delete_first(Node*& head){
    Node *current = head;
    head = head -> next;
    delete current;
}

int main() {
    Node* head = new Node();
    string name;
    // first item in the queue
    cout << "Enter the first name to insert in the queue: ";
    getline(cin,name);
    head -> name = name;
    head -> next = NULL;
    
    traversal(head);
    
   // inserting items into queue 
   cout<<"\n";
   insert_item("Kurt", head);
   insert_item("Redj", head);
   traversal(head);
   
   cout<<"\n";
   cout<<"After deletion"<<endl;
   delete_first(head);
   traversal(head);
   
    return 0;
}