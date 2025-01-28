#include <iostream>
using namespace std;

int main ()
{
    int height = 5;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - 1; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * 1 - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}