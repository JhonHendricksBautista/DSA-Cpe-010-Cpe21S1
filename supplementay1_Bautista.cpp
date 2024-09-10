#include <iostream>
using namespace std;

int Change(int a, int b){
	int auxilliary = a;
	a = b;
	b = auxilliary;
	
	cout  << "\t First number: " << a << endl;
	cout << "\t Second number: " << b <<endl;
}

int main(int argc, char** argv) {
	int first_num;
	int second_num;
	
	
	cout << "Enter the first Number: ";
	cin >> first_num;
	
	
	cout<< "Enter the second Number: ";
	cin >> second_num;
	
	
    cout << endl;
	cout << "Before"<<endl;
	cout << "\t First Number: " << first_num<<endl;
	cout << "\t Second Number: " << second_num;
	cout <<endl;
	cout << endl;
	
	cout << "After "<<endl;
	
	Change(first_num,second_num);
	
	
	return 0;
}
