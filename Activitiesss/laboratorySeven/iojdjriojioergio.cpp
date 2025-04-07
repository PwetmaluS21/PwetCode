// C++ program to demonstrate  
// accessing of data members  
  
#include <iostream> 
using namespace std; 
class Geeks 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string geekname; 
  
    // Member Functions() 
    void printname() 
    { 
       cout << "Geekname is: " << geekname; 
    } 
};

int main() { 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.geekname = "SIR LAZARO"; 
  
    // accessing member function 
    obj1.printname(); 
    return 0; 
}
// This program demonstrates the use of classes and objects in C++.
// It defines a class called Geeks with a public data member called geekname and a member function called printname().
// The program creates an object of the Geeks class, assigns a value to the geekname data member, and then calls the printname() function to display the value.
