#include <iostream>
using namespace std;

class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

class Rectangle: public Shape {
   public:
      int getArea();
};

int Rectangle::getArea() { 
    return width * height;
}

int main(void) {
   Rectangle Rect;
   Rect.setWidth(5);
   Rect.setHeight(7);
   cout << "Total area: " << Rect.getArea() << endl;
   system("pause");
}
// This program demonstrates the use of inheritance in C++.
// It defines a base class called Shape with member functions to set the width and height of a shape.
// The Rectangle class inherits from the Shape class and adds a member function to calculate the area.
// The program creates an instance of the Rectangle class, sets its dimensions, and calculates its area using the getArea() member function.