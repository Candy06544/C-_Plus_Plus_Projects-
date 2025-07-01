#include<iostream>
using namespace std;

int main() {
    int Temperature;
    cout << "Enter the temperature in degrees Celsius: ";
    cin >> Temperature;

    // Check the range for Freezing, Cold, Warm, and Hot
    if (Temperature < 0) {
        cout << "Freezing" << endl;
    }
    else if (Temperature <= 10) {
        cout << "Cold" << endl;
    }
    else if (Temperature <= 25) {
        cout << "Warm" << endl;
    }
    else {
        cout << "Hot" << endl;
    }

    return 0;
}
