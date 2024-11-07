#include <iostream>
#include <cmath>

using namespace std;

// Base class
class Shape {
public:
     void area() { // Virtual function
        cout << "Shape has no specific area formula." << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void area()  {
        cout << "Circle area: " << M_PI * radius * radius << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void area()  {
        cout << "Rectangle area: " << length * width << endl;
    }
};

int main() {
    Shape* shape; // Pointer to base class

    Circle circle(5); // Circle with radius 5
    Rectangle rectangle(4, 6); // Rectangle with length 4 and width 6

    // Base class pointer points to Circle
    shape = &circle;
    shape->area(); // Calls Circle's overridden method

    // Base class pointer points to Rectangle
    shape = &rectangle;
    shape->area(); // Calls Rectangle's overridden method

    cout<<sizeof(Shape);
    return 0;
}
