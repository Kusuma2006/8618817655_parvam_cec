
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    int id;
    string title;
    string description;
    bool isComplete;
};

vector<Task> tasks;
int nextId = 1;

void addTask() {
    Task t;
    t.id = nextId++;
    cout << "Enter task title: ";
    getline(cin >> ws, t.title);
    cout << "Enter task description: ";
    getline(cin, t.description);
    t.isComplete = false;
    tasks.push_back(t);
    cout << "Task added!\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    for (const auto& task : tasks) {
        cout << "ID: " << task.id << "\n"
             << "Title: " << task.title << "\n"
             << "Description: " << task.description << "\n"
             << "Status: " << (task.isComplete ? "Complete" : "Incomplete") << "\n\n";
    }
}

void updateTask() {
    int id;
    cout << "Enter task ID to update: ";
    cin >> id;
    for (auto& task : tasks) {
        if (task.id == id) {
            cout << "Enter new title: ";
            getline(cin >> ws, task.title);
            cout << "Enter new description: ";
            getline(cin, task.description);
            cout << "Task updated!\n";
            return;
        }
    }
    cout << "Task not found.\n";
}

void deleteTask() {
    int id;
    cout << "Enter task ID to delete: ";
    cin >> id;
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->id == id) {
            tasks.erase(it);
            cout << "Task deleted!\n";
            return;
        }
    }
    cout << "Task not found.\n";
}

void markTask() {
    int id;
    cout << "Enter task ID to mark complete/incomplete: ";
    cin >> id;
    for (auto& task : tasks) {
        if (task.id == id) {
            task.isComplete = !task.isComplete;
            cout << "Task marked as " << (task.isComplete ? "complete" : "incomplete") << ".\n";
            return;
        }
    }
    cout << "Task not found.\n";
}

void showMenu() {
    cout << "\n--- Task Manager ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Update Task\n";
    cout << "4. Delete Task\n";
    cout << "5. Mark Complete/Incomplete\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: updateTask(); break;
            case 4: deleteTask(); break;
            case 5: markTask(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);
    return 0;
}`