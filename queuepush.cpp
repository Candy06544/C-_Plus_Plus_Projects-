#include <queue>
#include <iostream>

int main() {
    std::queue<int> myQueue;  // Create an empty queue of integers

    // Adding elements using push()
    myQueue.push(10);  // Add 10 to the queue
    myQueue.push(20);  // Add 20 to the queue
    myQueue.push(30);  // Add 30 to the queue

    // Display the front element of the queue
    std::cout << "Front element: " << myQueue.front() << std::endl;

    return 0;
}
