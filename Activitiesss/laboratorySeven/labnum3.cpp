#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area () {
        return (width*height);
    }
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rectA (3,4);
  Rectangle rectB;
  cout << "Area of Rectangle A: " << rectA.area() << endl;
  cout << "Area of Rectangle B: " << rectB.area() << endl;
  system("pause");
}
// This program is a simple demonstration of the use of constructors in C++.
// It defines a class called Rectangle with two constructors: a default constructor and a parameterized constructor.
// The default constructor initializes the width and height of the rectangle to 5, while the parameterized constructor allows the user to specify the width and height.
// The program then creates two instances of the Rectangle class: one using the parameterized constructor and the other using the default constructor.
// It calculates and prints the area of both rectangles using the area() member function.
// The output of the program will be:
// Area of Rectangle A: 12
// Area of Rectangle B: 25
// The program ends with a system("pause") command, which is used to pause the console window so that the user can see the output before it closes.