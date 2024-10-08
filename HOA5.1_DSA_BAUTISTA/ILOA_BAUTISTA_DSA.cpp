#include <iostream>
#include <queue>
#include <string>
using namespace std;

void display(queue<string> student_q) {
    while(!student_q.empty()) {
        cout << "My name is " << student_q.front() << endl;
        student_q.pop();
    }
}

int main() {
    queue<string> student_q;

    string students[4] = {"Kurt", "Dale", "Redj", "Jhon"};

    for(int i = 0; i < 4; i++) {
        student_q.push(students[i]);
    }

    display(student_q);

    return 0;
}
