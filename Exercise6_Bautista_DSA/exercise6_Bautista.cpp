
#include <iostream>
#include <stack>
#include <string>
using namespace std;


void display(stack<string> pl);

void display(stack<string>pl)
{
    while(!pl.empty())
    {
    cout<<pl.top()<<endl;
    pl.pop();
    };
};
int main() {
 
    stack<string>pl;
    
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

