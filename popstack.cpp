#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;  // Create a stack of integers

    // Add elements to the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Pop the top element (15 will be removed)
    myStack.pop();

    // Display the new top element (now it will be 10)
    std::cout << "Top element after pop: " << myStack.top() << std::endl; 

    return 0;
}
