#include <iostream>
#include <vector>
using namespace std;


void preorderTraversal(int current, vector<vector<int>>& tree, vector<bool>& visited) {
    cout << current << " "; 
    visited[current] = true;

    for (int child : tree[current]) {
        if (!visited[child]) {
            preorderTraversal(child, tree, visited);
        }
    }
}

int main() {
    int nodes = 6; 
    vector<vector<int>> tree(nodes); 

   
    tree[0] = {1, 2}; 
    tree[1] = {0, 3, 4}; 
    tree[2] = {0}; 
    tree[3] = {1, 5}; 
    tree[4] = {1}; 
    tree[5] = {3}; 

    vector<bool> visited(nodes, false);

    cout << "Preorder Traversal of the Tree: ";
    preorderTraversal(0, tree, visited); 

    return 0;
}