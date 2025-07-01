#include <stack>
#include <iostream>

int main() {
    std::stack<int> myStack;  // Stack to store added numbers
    int total = 0;            // Running total
    int input;

    while (true) {
        std::cout << "Enter a number to add (or type -1 to undo, 0 to stop): ";
        std::cin >> input;

        if (input == 0) {  // End the program
            break;
        } 
        else if (input == -1) {  // Undo the last addition
            if (!myStack.empty()) {
                total -= myStack.top();  // Subtract the last added number from total
                myStack.pop();           // Remove it from the stack
                std::cout << "Undo successful.\n";
            } else {
                std::cout << "No actions to undo.\n";
            }
        } 
        else {  // Add a number
            myStack.push(input); // Push the number onto the stack
            total += input;      // Add it to the total
        }

        std::cout << "Current total: " << total << std::endl;
    }

    std::cout << "Final total: " << total << std::endl;
    return 0;
}
