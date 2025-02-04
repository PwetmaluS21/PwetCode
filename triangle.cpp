#include <iostream>
using namespace std;

int main ()
{
    int height = 5;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "■"; //Ito po yung bubong ng bahay
        }
        cout << endl;
    }

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - 1; ++j) {
            cout << "□□"; //Ito po yung bahay yehey
        }
        cout << endl;
    }
    return 0;
}