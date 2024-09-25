#include <iostream>
#include <queue>
#include <string>
using namespace std;


void display(queue<string> pl);

void display(queue<string>pl)
{
    while(!pl.empty())
    {
    cout<<pl.front()<<endl;
    pl.pop();
    };
};
int main() {
    // Write C++ code here
    queue<string>pl;
    
    pl.push("C++");
    pl.push("Java");
    pl.push("Python");
    cout<<"\n"<<"Initial stack"<<endl;
    display(pl);
    cout<<endl;
    pl.pop();
    pl.pop();
    cout<<"Final Stack: ";
    display(pl);

    return 0;
}