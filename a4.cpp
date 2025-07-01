#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;  // Create a stack of integers

    // Adding elements to the stack
    myStack.push(5);    // Adds 5 to the stack
    myStack.push(10);   // Adds 10 to the stack (10 is now on top)
    myStack.push(15);   // Adds 15 to the stack (15 is now on top)

    // Displaying the top element after each push
    std::cout << "Top element after pushing 5: " << myStack.top() << std::endl;

    return 0;
}
