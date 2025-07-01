#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
public:
    string taskName;
    bool isComplete;

    Task(string name) {
        taskName = name;
        isComplete = false;
    }

    void markComplete() {
        isComplete = true;
    }
};

void displayMenu() {
    cout << "\nTo-Do List Menu:\n";
    cout << "1. Add Task\n";
    cout << "2. Delete Task\n";
    cout << "3. View Tasks\n";
    cout << "4. Mark Task as Complete\n";
    cout << "5. Exit\n";
}

int main() {
    vector<Task> tasks;
    int choice;
    string taskName;
    int taskIndex;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // to ignore the newline character left in the buffer

        switch(choice) {
            case 1:
                // Add a task
                cout << "Enter task description: ";
                getline(cin, taskName);
                tasks.push_back(Task(taskName));
                cout << "Task added successfully!" << endl;
                break;
            
            case 2:
                // Delete a task
                cout << "Enter task index to delete: ";
                cin >> taskIndex;
                if(taskIndex >= 0 && taskIndex < tasks.size()) {
                    tasks.erase(tasks.begin() + taskIndex);
                    cout << "Task deleted successfully!" << endl;
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;
            
            case 3:
                // View tasks
                if (tasks.empty()) {
                    cout << "No tasks to show!" << endl;
                } else {
                    cout << "Your Tasks:\n";
                    for (int i = 0; i < tasks.size(); ++i) {
                        cout << i << ". " << tasks[i].taskName << (tasks[i].isComplete ? " [Completed]" : " [Pending]") << endl;
                    }
                }
                break;
            
            case 4:
                // Mark task as complete
                cout << "Enter task index to mark as complete: ";
                cin >> taskIndex;
                if(taskIndex >= 0 && taskIndex < tasks.size()) {
                    tasks[taskIndex].markComplete();
                    cout << "Task marked as completed!" << endl;
                } else {
                    cout << "Invalid index!" << endl;
                }
                break;

            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            
            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
