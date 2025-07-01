#include <stack>
#include <iostream>

int main() {
    std::stack<int> myStack;
    myStack.push(10); // Add an element
    myStack.push(20);
    std::cout << "Top element: " << myStack.top() << std::endl; // View top element
    myStack.pop(); // Remove top element
    std::cout << "Top element after pop: " << myStack.top() << std::endl;
    return 0;
}
