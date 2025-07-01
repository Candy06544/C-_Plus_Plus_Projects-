#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;  // Create a stack of integers

    // Adding elements to the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Checking the size of the stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    return 0;
}
