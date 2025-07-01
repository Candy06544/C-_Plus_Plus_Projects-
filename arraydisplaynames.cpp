a
#include <iostream>
#include <string>
using namespace std;

int main() {
    string StudentsNames[5]; // Declare an array to store names
    cout << "Enter the names of the students:" << endl;

    // Input loop to store names in the array
    for (int i = 0; i < 5; i++) { // Corrected condition: i < 5
        cout << "Student Name " << i + 1 << ": "; // Improved output formatting
        cin >> StudentsNames[i]; // Use consistent array name
    }

    cout << "The names entered are:" << endl;

    // Output loop to display the names
    for (int i = 0; i < 5; i++) { // Corrected condition: i < 5
        cout << StudentsNames[i] << endl; // Print each name
    }

    return 0; // Indicate successful program termination
}
