#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;  // Create a set to store integers

    // Adding elements to the set
    numbers.insert(5);
    numbers.insert(10);
    numbers.insert(15);

    // Display the elements
    std::cout << "Set elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}
