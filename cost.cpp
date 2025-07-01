#include <iostream>ric

int main() {
    int quantity;                 // Variable to store the quantity of items (integer data type)
    double pricePerItem;          // Variable to store the price per item (floating-point data type)
    double totalCost;             // Variable to store the total cost (floating-point data type)
    std::string itemName;         // Variable to store the name of the item (string data type)

    // Getting input from the user
    std::cout << "Enter the item name: ";
    std::getline(std::cin, itemName); // Allows input of item name with spaces

    std::cout << "Enter the quantity of " << itemName << ": ";
    std::cin >> quantity;

    std::cout << "Enter the price per " << itemName << ": ";
    std::cin >> pricePerItem;

    // Calculating total cost
    totalCost = quantity * pricePerItem;

    // Displaying the result
    std::cout << "Total cost for " << quantity << " " << itemName << "(s): $" << totalCost << std::endl;

    return 0;
}
