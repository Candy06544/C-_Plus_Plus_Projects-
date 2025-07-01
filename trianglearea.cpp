#include <iostream> // Include the input-output library for console input and output

int main() {
    float base, height, area; // Declare variables for base, height, and area

    // Ask the user for the base of the triangle
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    // Ask the user for the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    // Display the result
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0; // Indicate that the program finished successfully
}

6