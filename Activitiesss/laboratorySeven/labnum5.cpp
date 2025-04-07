#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) { }
    double area() {
        return radius*radius*3.14159265;
    }
};

class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {
        return base.area() * height;
    }
};

int main () {
  Cylinder foo (10,20);

  cout << "foo's volume: " << foo.volume() << '\n';
  return 0;
}
//// This program demonstrates the use of classes and member initialization lists in C++.
// It defines two classes: Circle and Cylinder.
// The Circle class has a constructor that initializes the radius of the circle and a member function to calculate the area.
// The Cylinder class has a member of type Circle and a constructor that initializes both the base (Circle) and the height of the cylinder.
// The program creates an instance of the Cylinder class and calculates its volume using the volume() member function.
