#include <iostream>
#include <vector> // Include vector header

using namespace std;
int ctr = 0;

void printInitial(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printResult(int index) {
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    cout << "\n" << ctr << " comparison(s) made." << endl;
}

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        ctr++; 
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {34, 7, 23, 32, 5, 62, 32, 2, 45, 67}; // Use vector
    int target = 32;

    cout << "Original array: ";
    printArray(arr);
    
    bubbleSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);
    
    printInitial(arr);
    int result = linearSearch(arr, target);
    printResult(result);

    return 0;
}