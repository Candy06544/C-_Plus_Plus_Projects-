#include <iostream>
#include <string>  // for string data type
using namespace std;

int main() {
    string names[50];  // Array to store names of 50 students
    int marks[50];     // Array to store marks for 50 students
    int failedStudents = 0; // Counter for failed students
    
    // Loop to input names and marks for each student
    cout << "Enter names and marks for 50 students: " << endl;
    for (int i = 0; i < 50; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> names[i];  // Input student name
        cout << "Enter marks for " << names[i] << ": ";
        cin >> marks[i];  // Input student marks
    }
    
    // Check which students failed
    cout << "\nList of students who failed:" << endl;
    for (int i = 0; i < 50; i++) {
        if (marks[i] < 50) {
            cout << names[i] << " failed with marks: " << marks[i] << endl;
            failedStudents++;
        }
    }
    
    // Optionally, print the total number of students who failed
    cout << "\nTotal failed students: " << failedStudents << endl;
    
    return 0;
}
