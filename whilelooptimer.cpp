#include <iostream>

int main() {
    int timeLeft = 10;  // Start at 10 seconds

    // Continue the countdown until timeLeft reaches 0
    while (timeLeft > 0) {
        std::cout << "Time left: " << timeLeft << " seconds" << std::endl;
        timeLeft--;  // Decrease the time by 1 second
    }

    std::cout << "Time's up!" << std::endl;  // Once the loop ends, print "Time's up!"

    return 0;
}
