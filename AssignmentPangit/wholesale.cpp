/*      1. Write a program in C++ using function that asks the user 
        to enter an item’s wholesale cost and its markup percentage.
        It should then display the item’s retail price.
*/

#include <iostream>
using namespace std;

int diff();
int sum(); 
void print();

int main () {
    char choice;
    do {
        int total, result;
        result = diff();
        total = sum();
        cout << "The difference of num1 to num2 = " << result << endl;
        cout << "The sum of num3 and num4 = " << total << endl;
        print();
        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

int diff () {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    return num1 - num2;
}

int sum () {    // FUNCTION DEFINITION
    int num3, num4;
    cout << "Enter two numbers: ";
    cin >> num3 >> num4;
    return num3 + num4;
}

void print () {
    cout << "[A] Sum" << endl;
    cout << "[B] Difference" << endl;
    cout << "[C] Product" << endl;
    cout << "[D] Quit" << endl;
}