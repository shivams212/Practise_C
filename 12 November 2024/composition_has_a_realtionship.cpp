#include <iostream>
using namespace std;

// Engine class
class Engine {
public:
    void start() {
        cout << "Engine starts!" << endl;
    }
};

// Car class
class Car {
private:
    Engine engine; // Car "has an" Engine
public:
    void drive() {
        engine.start(); // Car uses Engine to start
        cout << "Car is driving!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive(); // Starts the engine and drives the car
    return 0;
}
