#include <iostream>
#include <stack>    

using namespace std;

int main() {
    // Create a stack to store integers
    stack<int> newStack;

    // Pushing elements onto the stack
    newStack.push(3);  
    newStack.push(8); 
    newStack.push(15); 

 
    cout << "Stack Empty? " << newStack.empty() << endl;


    cout << "Stack Size: " << newStack.size() << endl;

  
    cout << "Top Element of the Stack: " << newStack.top() << endl;


    newStack.pop();

    // Display the new top element after popping
    cout << "Top Element of the Stack: " << newStack.top() << endl;

    // Print the size of the stack after popping
    cout << "Stack Size: " << newStack.size() << endl;

    return 0;
}
