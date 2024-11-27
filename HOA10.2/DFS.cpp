#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(int startNode, vector<vector<int>>& graph, vector<bool>& visited) {
    stack<int> s; 
    s.push(startNode);
    visited[startNode] = true; 

    while (!s.empty()) {
        int current = s.top();
        s.pop();
        cout << current << " "; 

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) { 
                visited[neighbor] = true;
                s.push(neighbor); 
            }
        }
    }
}

int main() {
    int nodes = 6; 
    vector<vector<int>> graph(nodes); 

    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0};
    graph[3] = {1, 5};
    graph[4] = {1};
    graph[5] = {3};

    vector<bool> visited(nodes, false); 
    cout << "DFS Traversal starting from node 0: ";
    dfs(0, graph, visited); 

    return 0;
}
