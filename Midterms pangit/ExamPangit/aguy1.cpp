#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std; 

int choice;

class sariSari {
    public:
        string name;
        int id;
        int price;
        int shelf_life;
        int pcs;

        void setData (string sn, int i, int p, int slife, int ps)
        {
            name = sn;
            id = i;
            price = p;
            shelf_life = slife;
            pcs = ps;
        }
        
        void displayData()
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Price: " << price << endl;
            cout << "Shelf life: " << shelf_life << endl;
            cout << "Pieces: " << pcs << "\n"<< endl;
        };

        void getPricePieces() {
            int inputId, inputPcs;
            cout << "Enter product ID: ";
            cin >> inputId;

            if (inputId == id) {
                cout << "Enter pieces: ";
                cin >> inputPcs;
                int totalPrice = inputPcs * price;
                cout << "Total Price of " << inputPcs << " " << name << " is: " << totalPrice << endl;
            } else {
                cout << "Product ID not found." << endl;
            }
        }
};

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

        
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    
    sariSari name1, name2, name3, name4, name5, name6, name7, name8;
    name1.setData("Mangoes", 10245, 20, 60, 100);
    name2.setData("Apple", 20255, 15, 34, 50);
    name3.setData("C2 Red", 30356, 30, 360, 200);
    name4.setData("Buko Pie", 12347, 40, 120, 150);
    name5.setData("Magic Sarap", 77878, 10, 520, 1000);
    name6.setData("C2 Green", 10255, 25, 360, 300);
    name7.setData("Boy Bawang", 12032, 15, 400, 140);
    name8.setData("Banana", 11254, 7, 24, 30);
    
    vector<int> ids = {name1.shelf_life, name2.shelf_life, name3.shelf_life, name4.shelf_life, name5.shelf_life, name6.shelf_life, name7.shelf_life, name8.shelf_life};
    cout << "Original array: ";
    printArray(ids);

    
    selectionSort(ids);
    
    cout << "Sorted array: ";
    printArray(ids);
    cout << endl;
    return 0;
}