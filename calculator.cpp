#include <iostream> // Include the input-output library for console input and output

int main() {
    float num1, num2, product; // Declare variables for the two numbers and their product

    // Prompt the user for the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user for the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Display the result
    std::cout << "The product of the two numbers is: " << product << std::endl;

    return 0; // Indicate that the program finished successfully
}
