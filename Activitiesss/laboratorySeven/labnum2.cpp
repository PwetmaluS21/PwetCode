#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rectA (3,4);
  Rectangle rectB (5,6);
  
  cout << "Area of Rectangle A: " << rectA.area() << endl;
  cout << "Area of Rectangle B: " << rectB.area() << endl;
  system("pause");
}
// This program demonstrates the use of a constructor in a class to initialize the width and height of a rectangle.
// It defines a class called Rectangle with a constructor that takes two parameters (width and height) and initializes the corresponding member variables.
// The program creates two instances of the Rectangle class with different dimensions and calculates their areas using the area() member function.