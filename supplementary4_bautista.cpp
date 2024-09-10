#include <iostream>
#include <cmath> 
using namespace std;

class Triangle {
private:
    double angleA, angleB, angleC;
    double sideA, sideB, sideC;

public:
    Triangle(double A, double B, double C, double sideA, double sideB, double sideC);
    void setAngles(double A, double B, double C);
    void setSides(double A, double B, double C);
    const bool validateTriangle();
    double computeArea();        
    double computePerimeter();   
    string determineType();      
};


Triangle::Triangle(double A, double B, double C, double a, double b, double c) {
    angleA = A;
    angleB = B;
    angleC = C;
    sideA = a;
    sideB = b;
    sideC = c;
}


void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
}


void Triangle::setSides(double a, double b, double c) {
    sideA = a;
    sideB = b;
    sideC = c;
}


const bool Triangle::validateTriangle() {
    return (angleA + angleB + angleC == 180);
}


double Triangle::computeArea() {
    double s = (sideA + sideB + sideC) / 2;  
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));  
}


double Triangle::computePerimeter() {
    return sideA + sideB + sideC;
}


string Triangle::determineType() {
    if (angleA < 90 && angleB < 90 && angleC < 90) {
        return "Acute triangle";
    } else if (angleA > 90 || angleB > 90 || angleC > 90) {
        return "Obtuse triangle";
    } else if(angleA == 90 || angleB == 90 || angleC == 90){
    	return "Right triangle";
	}else {
        return "not a triangle";
    }
}

int main() {
    
    float angle1;
    float angle2;
    float angle3;
    float side1;
    float side2;
    float side3;
    
    cout << "Input Angle of Triangle"<<endl;
    
    cout << "angle A: ";
    cin >> angle1;
    cout <<endl;
    
    cout << "angle B: ";
    cin >> angle2;
    cout <<endl;
    
    cout << "angle C: ";
    cin >> angle3;
    cout <<endl;
    
    cout <<"Input Side of Triangle"<<endl;
    cout <<"Side A: ";
    cin >> side1;
    cout <<endl;
    
    cout << "Side B: ";
    cin >> side2;
    cout <<endl;
    
    cout << "Side C: ";
    cin >> side3;
    cout << endl;
    
    Triangle set1(angle1, angle2, angle3, side1, side2, side3);

    
    if (set1.validateTriangle()) {
        cout << "The shape is a valid triangle" <<endl;
        cout << endl;

        
        cout << "Area of the triangle: " << set1.computeArea() << " square units";
        cout << endl;
        cout << "Perimeter of the triangle: " << set1.computePerimeter() << " units";
		cout <<endl;
        cout << "The triangle is: " << set1.determineType();
    } else {
        cout << "The shape is NOT a valid triangle" <<endl;
        cout <<endl;
    }

    return 0;
}
