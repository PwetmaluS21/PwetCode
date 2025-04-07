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

class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   area = Rect.getArea();
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
   system("pause");
}
// This program demonstrates multiple inheritance in C++.
// It defines a base class called Shape with member functions to set the width and height of a shape.
// The PaintCost class provides a method to calculate the cost of painting based on the area.
// The Rectangle class inherits from both Shape and PaintCost classes.
// It adds a member function to calculate the area.
// The program creates an instance of the Rectangle class, sets its dimensions, calculates its area, and computes the total paint cost based on the area.
// The output will display the total area and the total paint cost.
// The program ends with a system("pause") command, which is used to pause the console window so that the user can see the output before it closes.