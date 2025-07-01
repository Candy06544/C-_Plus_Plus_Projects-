#include <iostream>
using namespace std;

int main() {
    float length, width, area;

    // Ask user to input the length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the area
    area = length * width;

    // Output the area
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
