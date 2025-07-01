#include <iostream>
#include <string>
using namespace std;


class Car {

public:
    string brand;
    int year;

    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void startEngine() {
        cout << "The engine is now running!" << endl;
    }

};
int main() {
    // Creating an object with the constructor
    Car myCar("Honda", 2023);

    cout << "Car brand: " << myCar.brand << endl;
    cout << "Car year: " << myCar.year << endl;

    myCar.startEngine();

    return 0;
}

