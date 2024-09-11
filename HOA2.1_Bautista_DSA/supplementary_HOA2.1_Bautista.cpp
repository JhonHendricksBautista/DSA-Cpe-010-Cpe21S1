#include <iostream>
#include <string>

using namespace std;

class Fruit {
public:

    Fruit(string name = "", double price = 0.0, int quantity = 0)
        : name_(name), price_(price), quantity_(quantity) {}


    ~Fruit() {
        cout << "Fruit destructor called" << endl;
    }

    Fruit(const Fruit& other)
        : name_(other.name_), price_(other.price_), quantity_(other.quantity_) {
        cout << "Fruit copy constructor called" << endl;
    }

    Fruit& operator=(const Fruit& other) {
        if (this != &other) {
            name_ = other.name_;
            price_ = other.price_;
            quantity_ = other.quantity_;
        }
        cout << "Fruit copy assignment operator called" << endl;
        return *this;
    }

    string name_;
    double price_;
    int quantity_;
    double calculateSum() const {
        return price_ * quantity_;
    }

    void displayInfo() const {
        cout << "Fruit: " << name_ << ", Price: " << price_ << ", Quantity: " << quantity_ << endl;
    }
};

class Vegetable {
public:

    Vegetable(string name = "", double price = 0.0, int quantity = 0)
        : name_(name), price_(price), quantity_(quantity) {}


    ~Vegetable() {
        cout << "Vegetable destructor called" << endl;
    }


    Vegetable(const Vegetable& other)
        : name_(other.name_), price_(other.price_), quantity_(other.quantity_) {
        cout << "Vegetable copy constructor called" << endl;
    }


    Vegetable& operator=(const Vegetable& other) {
        if (this != &other) {
            name_ = other.name_;
            price_ = other.price_;
            quantity_ = other.quantity_;
        }
        cout << "Vegetable copy assignment operator called" << endl;
        return *this;
    }

    string name_;
    double price_;
    int quantity_;


    double calculateSum() const {
        return price_ * quantity_;
    }

    void displayInfo() const {
        cout << "Vegetable: " << name_ << ", Price: " << price_ << ", Quantity: " << quantity_ << endl;
    }
};

double calculateTotalSum(Fruit fruits[], int fruitCount, Vegetable vegetables[], int vegetableCount) {
    double totalSum = 0;

    for (int i = 0; i < fruitCount; i++) {
        totalSum += fruits[i].calculateSum();
    }

    for (int i = 0; i < vegetableCount; i++) {
        totalSum += vegetables[i].calculateSum();
    }

    return totalSum;
}

void removeVegetable(Vegetable vegetables[], int vegetableCount, string nameToRemove) {
    for (int i = 0; i < vegetableCount; i++) {
        if (vegetables[i].name_ == nameToRemove) {
            vegetables[i].quantity_ = 0;
            cout << nameToRemove << " removed from the list." << endl;
            break;
        }
    }
}

int main() {
    const int fruitCount = 2;
    const int vegetableCount = 2;

    Fruit fruits[fruitCount] = {
        Fruit("Apple", 10, 7),
        Fruit("Banana", 10, 8)
    };

    Vegetable vegetables[vegetableCount] = {
        Vegetable("Broccoli", 60, 12),
        Vegetable("Lettuce", 50, 10)
    };

    cout << "Grocery List of Jenna:" << endl;
    for (int i = 0; i < fruitCount; i++) {
        fruits[i].displayInfo();
    }
    for (int i = 0; i < vegetableCount; i++) {
        vegetables[i].displayInfo();
    }

    double total = calculateTotalSum(fruits, fruitCount, vegetables, vegetableCount);
    cout << "Total cost: " << total << endl;
    cout << endl;
    removeVegetable(vegetables, vegetableCount, "Lettuce");

    cout << "\nGrocery List after removal of Lettuce:" << endl;
    for (int i = 0; i < fruitCount; i++) {
        fruits[i].displayInfo();
    }
    for (int i = 0; i < vegetableCount; i++) {
        if (vegetables[i].quantity_ > 0) {
            vegetables[i].displayInfo();
        }
    }

    return 0;
}