#include <iostream>

int main() {
    float length, width, area;

    // Ask the user to enter length and width
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate area
    area = length * width;

    // Display the result
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}

