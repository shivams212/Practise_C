#include <iostream>
using namespace std;

// Engine class
class Engine {
public:
    void start() {
        cout << "Engine starts!" << endl;
    }
};

// Car class (Aggregation: Engine is passed to Car)
class Car {
private:
    Engine* engine; // Car has a reference/pointer to an Engine
public:
    Car(Engine* eng) : engine(eng) {} // Car uses an external Engine
    void drive() {
        engine->start();
        cout << "Car is driving!" << endl;
    }
};

int main() {
    Engine myEngine; // Engine created independently
    Car myCar(&myEngine); // Car is given a reference to the Engine
    myCar.drive(); // Starts the engine and drives the car
    return 0;
}
