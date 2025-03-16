#include <iostream>
#include <queue>

using namespace std;

void displayMenu() {
    cout << "[A] Push Data" << endl;
    cout << "[B] Pop Data" << endl;
    cout << "[C] Show Front" << endl;
    cout << "[D] Show Back" << endl;
    cout << "[E] Show Size" << endl;
    cout << "[F] Quit" << endl;
    cout << "Enter Choice: ";
}

void caseA(queue<int>& q) {
    int value;
    cout << "Enter value to push: \n";
    cin >> value;
    q.push(value);
    cout << "Value pushed.\n" << endl;
}

void caseB(queue<int>& q) {
    if (!q.empty()) {
        q.pop();
        cout << "Value popped.\n" << endl;
    } else {
        cout << "Queue is empty.\n" << endl;
    }
}

void caseC(queue<int>& q) {
    if (!q.empty()) {
        cout << "Front value: \n" << q.front() << endl;
    } else {
        cout << "Queue is empty.\n" << endl;
    }
}

void caseD(queue<int>& q) {
    if (!q.empty()) {
        cout << "Back value: \n" << q.back() << endl;
    } else {
        cout << "Queue is empty.\n" << endl;
    }
}

void caseE(queue<int>& q) {
    cout << "Queue size: \n" << q.size() << endl;
}

void caseF() {
    cout << "Quitting...\n" << endl;
}

int main() {
    queue<int> q;
    char choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                caseA(q);
                break;
            case 'B':
            case 'b':
                caseB(q);
                break;
            case 'C':
            case 'c':
                caseC(q);
                break;
            case 'D':
            case 'd':
                caseD(q);
                break;
            case 'E':
            case 'e':
                caseE(q);
                break;
            case 'F':
            case 'f':
                caseF();
                break;
            default:
                cout << "Invalid choice. Please try again.\n" << endl;
        }
    } while (choice != 'F' && choice != 'f');

    return 0;
}