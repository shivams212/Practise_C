#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for polymorphism
    virtual void draw() const {
        cout << "Drawing a generic shape" << endl;
    }
    // Virtual destructor (optional, but necessary for proper cleanup in inheritance)
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() const override { // Override the base class function
        cout << "Drawing a circle" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override { // Override the base class function
        cout << "Drawing a rectangle" << endl;
    }
};

// Main function
int main() {
    Circle circle;                // Derived object
    Rectangle rectangle;          // Derived object

    // Base class reference referring to derived objects
    Shape& shapeRef1 = circle;
    Shape& shapeRef2 = rectangle;

    // Call overridden methods through references
    shapeRef1.draw();             // Outputs: Drawing a circle
    shapeRef2.draw();             // Outputs: Drawing a rectangle

    return 0;
}


// Drawing a circle
// Drawing a rectangle