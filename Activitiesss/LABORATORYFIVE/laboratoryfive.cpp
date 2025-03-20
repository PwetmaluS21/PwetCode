#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr, int& comparisons, int& swaps) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

void insertionSort(vector<int>& arr, int& comparisons, int& swaps) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            j--;
            swaps++;
        }
        arr[j + 1] = key;
        if (j >= 0) comparisons++; // for the last comparison when the while loop exits
    }
}

void selectionSort(vector<int>& arr, int& comparisons, int& swaps) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++;
        }
    }
}

void merge(vector<int>& arr, int left, int mid, int right, int& comparisons, int& swaps) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            swaps++;
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(vector<int>& arr, int left, int right, int& comparisons, int& swaps) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid, comparisons, swaps);
        mergeSort(arr, mid + 1, right, comparisons, swaps);
        merge(arr, left, mid, right, comparisons, swaps);
    }
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    vector<int> bubbleArr = arr;
    int bubbleComparisons = 0, bubbleSwaps = 0;
    bubbleSort(bubbleArr, bubbleComparisons, bubbleSwaps);
    cout << "Bubble Sort: ";
    printArray(bubbleArr);
    cout << "Comparisons: " << bubbleComparisons << ", Swaps: " << bubbleSwaps << endl;

    // Insertion Sort
    vector<int> insertionArr = arr;
    int insertionComparisons = 0, insertionSwaps = 0;
    insertionSort(insertionArr, insertionComparisons, insertionSwaps);
    cout << "Insertion Sort: ";
    printArray(insertionArr);
    cout << "Comparisons: " << insertionComparisons << ", Swaps: " << insertionSwaps << endl;

    // Selection Sort
    vector<int> selectionArr = arr;
    int selectionComparisons = 0, selectionSwaps = 0;
    selectionSort(selectionArr, selectionComparisons, selectionSwaps);
    cout << "Selection Sort: ";
    printArray(selectionArr);
    cout << "Comparisons: " << selectionComparisons << ", Swaps: " << selectionSwaps << endl;

    // Merge Sort
    vector<int> mergeArr = arr;
    int mergeComparisons = 0, mergeSwaps = 0;
    mergeSort(mergeArr, 0, N - 1, mergeComparisons, mergeSwaps);
    cout << "Merge Sort: ";
    printArray(mergeArr);
    cout << "Comparisons: " << mergeComparisons << ", Swaps: " << mergeSwaps << endl;
    return 0;
}