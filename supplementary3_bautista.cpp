#include <iostream>
#include <cmath> 
using namespace std;

int Compute_Distance(int x1, int y1, int x2, int y2){

	double Distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "The distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << Distance << endl;
	
}

int main() {
  
	int x1;
	int y1;
	int x2;
	int y2;
	
	cout << "Enter the coordinates in Point 1"<< endl;
	cout << "Enter x1: ";
	cin >> x1;
	cout << endl;
	cout << "Enter y1: ";
	cin >> y1;
	cout <<endl;
	
	cout << "Enter the coordinates in Point 2"<< endl;

	cout << "Enter x2: ";
	cin >> x2;
	cout <<endl;
	cout << "Enter y2: ";
	cin >> y2;
	cout << endl;
	
	Compute_Distance(x1,y1,x2,y2);
	
    return 0;
}
