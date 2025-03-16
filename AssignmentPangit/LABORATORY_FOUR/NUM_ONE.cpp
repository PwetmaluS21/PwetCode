#include <iostream>
#include <stack>

using namespace std;

void displayMenu() {
    cout << "[A] Push Data" << endl;
    cout << "[B] Pop Data" << endl;
    cout << "[C] Show Top" << endl;
    cout << "[D] Show Size" << endl;
    cout << "[E] Quit" << endl;
    cout << "Enter Choice: ";
}

void caseA(stack<int>& s) {
    int value;
    cout << "Enter value to push: ";
    cin >> value;
    s.push(value);
    cout << "Value pushed. \n" << endl;
}

void caseB(stack<int>& s) {
    if (!s.empty()) {
        s.pop();
        cout << "Value popped.\n" << endl;
    } else {
        cout << "Stack is empty.\n" << endl;
    }
}

void caseC(stack<int>& s) {
    if (!s.empty()) {
        cout << "Top value: \n" << s.top() << endl;
    } else {
        cout << "Stack is empty.\n" << endl;
    }
}

void caseD(stack<int>& s) {
    cout << "Stack size: \n" << s.size() << endl;
}

void caseE() {
    cout << "Quitting...\n" << endl;
}

int main() {
    stack<int> s;
    char choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                caseA(s);
                break;
            case 'B':
            case 'b':
                caseB(s);
                break;
            case 'C':
            case 'c':
                caseC(s);
                break;
            case 'D':
            case 'd':
                caseD(s);
                break;
            case 'E':
            case 'e':
                caseE();
                break;
            default:
                cout << "Invalid choice. Please try again.\n" << endl;
        }
    } while (choice != 'E' && choice != 'e');

    return 0;
}