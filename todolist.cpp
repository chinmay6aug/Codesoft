#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        Task newTask;
        newTask.description = description;
        newTask.completed = false;
        tasks.push_back(newTask);
        cout << "Task added successfully." << endl;
    }

    void viewTasks() {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            if (tasks[i].completed)
                cout << "[Completed] ";
            else
                cout << "[Pending] ";
            cout << tasks[i].description << endl;
        }
    }

    void markTaskCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed successfully." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList todoList;
    char choice;
    string task;
    size_t index;

    do {
        cout<<"\n---------------------To Do List--------------------\n";
        cout << "\nMenu:\n";
        cout << "1. Add a new Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, task);
                todoList.addTask(task);
                break;
            case '2':
                todoList.viewTasks();
                break;
            case '3':
                cout << "Enter task index to mark as completed: ";
                cin >> index;
                todoList.markTaskCompleted(index);
                break;
            case '4':
                cout << "Enter task index to remove: ";
                cin >> index;
                todoList.removeTask(index);
                break;
            case '5':
                cout << "User Exited successfully...";
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '5');

    return 0;
}
