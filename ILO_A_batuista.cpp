#include <iostream>
using namespace std;

int Sum(int a, int b){
	
	return a + b;
}

void LogSummation(int a,int b){
	int result = Sum(a,b);
	cout << result << endl;
}

int Compare(int a, int b){
	if (a > b){
		return a;
	}else{
		return b;
	}
	
}


void Out_Compare(int a, int b){
	int largest = Compare(a,b);
	cout << "The largest number is: "<<largest <<endl;
}

bool LogicalOperations(bool boolA, bool boolB) {
    cout << "Logical Operations between " << boolA << " and " << boolB << ":\n";
    cout << "AND (&&): " << (boolA && boolB) << endl;
    cout << "OR (||): " << (boolA || boolB) << endl;
    cout << "NOT A (!A): " << (!boolA) << endl;
    cout << "NOT B (!B): " << (!boolB) << endl;
    
    
    return true;
}

int main(int argc, char** argv) {
	
	
	cout << "Display the Sum"<<endl;
	int first_number;
	int second_number;
	
	cout << "Enter the number of First number: ";
	cin >> first_number;
	cout << endl;
	cout << "Enter the number of Second number: ";
	cin >> second_number;
	cout << endl;
	
	LogSummation(first_number,second_number);
	cout << ""<<endl;
	cout <<endl;
	
	
	cout << "Compare the Largest Number"<<endl;
	int Var_A;
	int Var_B;
	cout << "Enter number 1: ";
	cin >> Var_A;
	cout <<endl;
	cout << "Enter number 2: ";
	cin >> Var_B;
	cout << endl;
	
	Out_Compare(Var_A,Var_B);
	
	cout << ""<<endl;
	cout <<endl;
	
	
	cout << "Performing Logical Operations" << endl;
    bool boolA, boolB;
    
    cout << "Enter first Boolean value (0 or 1): ";
    cin >> boolA;
    cout << "Enter second Boolean value (0 or 1): ";
    cin >> boolB;
    
    LogicalOperations(boolA, boolB);
    cout << "" << endl;
	
	
	
	return 0;
}
