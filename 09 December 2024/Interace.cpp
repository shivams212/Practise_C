#include <iostream>
using namespace std;

// Interface (Abstract Class)
class Shape {
public:
    // Pure virtual function
    virtual void draw() const = 0;

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Shape() {}
};

// Derived class for Circle
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Cannot create an instance of Shape
    // Shape shape; // Error: Cannot instantiate abstract class

    // Create objects of derived classes
    Shape* circle = new Circle();
    Shape* rectangle = new Rectangle();

    // Call the draw method
    circle->draw();       // Output: Drawing a Circle.
    rectangle->draw();    // Output: Drawing a Rectangle.

    // Clean up
    delete circle;
    delete rectangle;

    return 0;
}
