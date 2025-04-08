#include <iostream>
#include <stack>
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
    
    stack <int> mystack;
    mystack.push(name1.id);
    mystack.push(name2.id);
    mystack.push(name3.id);
    mystack.push(name4.id);
    mystack.push(name5.id);
    mystack.push(name6.id);
    mystack.push(name7.id);
    mystack.push(name8.id);

        cout << "Elements in Stack: " << endl;
    while (!mystack.empty()){
        cout << mystack.top() << endl;
        mystack.pop();
    }
    cout << endl;
    return 0;
}