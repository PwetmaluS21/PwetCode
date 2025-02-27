#include <iostream>
using namespace std;
const int SIZE = 3;

void inputMatrix(int matrix [SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void showMatrix(int matrix [SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void sumRows(int matrix [SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum = 0;
        for (int j = 0; j < SIZE; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << endl;
    }
}

void sumColumns(int matrix [SIZE][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum = 0;
        for (int j = 0; j < SIZE; j++) {
            sum += matrix[j][i];
        }
        cout << "Sum of column " << i << ": " << sum << endl;
    }
}

int main() {
    int matrix[SIZE][SIZE];
    inputMatrix(matrix);
    cout << "Matrix:" << endl;
    showMatrix(matrix);
    sumRows(matrix);
    sumColumns(matrix);
    return 0;
}