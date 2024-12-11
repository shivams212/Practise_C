// The Facade Design Pattern in C++ is a structural design pattern that provides a simplified interface to a more complex subsystem. It helps decouple the client code from the subsystem and makes the overall system easier to use

// #include <iostream>
// #include <string>

// // Subsystem 1: CPU
// class CPU {
// public:
//     void start() {
//         std::cout << "CPU started." << std::endl;
//     }
//     void execute() {
//         std::cout << "CPU executing instructions." << std::endl;
//     }
//     void shutdown() {
//         std::cout << "CPU shutting down." << std::endl;
//     }
// };

// // Subsystem 2: Memory
// class Memory {
// public:
//     void load(int position, const std::string& data) {
//         std::cout << "Loaded data at position " << position << ": " << data << std::endl;
//     }
//     void clear() {
//         std::cout << "Memory cleared." << std::endl;
//     }
// };

// // Subsystem 3: HardDrive
// class HardDrive {
// public:
//     std::string readData(int sector) {
//         std::cout << "Reading data from sector " << sector << "." << std::endl;
//         return "OS Bootloader";
//     }
// };

// // Facade: Simplified interface
// class ComputerFacade {
// private:
//     CPU cpu;
//     Memory memory;
//     HardDrive hardDrive;

// public:
//     void startComputer() {
//         std::cout << "Starting the computer..." << std::endl;
//         cpu.start();
//         std::string bootloader = hardDrive.readData(0);
//         memory.load(0, bootloader);
//         cpu.execute();
//         std::cout << "Computer started successfully!" << std::endl;
//     }

//     void shutdownComputer() {
//         std::cout << "Shutting down the computer..." << std::endl;
//         memory.clear();
//         cpu.shutdown();
//         std::cout << "Computer shut down successfully!" << std::endl;
//     }
// };

// // Client Code
// int main() {
//     ComputerFacade computer;

//     // Simplified interaction with the system using the Facade
//     computer.startComputer();
//     std::cout << "Performing operations..." << std::endl;
//     computer.shutdownComputer();

//     return 0;
// }


#include <iostream>

// Subsystem 1
class Engine {
public:
    void Start()
    {
        std::cout << "Engine started" << std::endl;
    }

    void Stop()
    {
        std::cout << "Engine stopped" << std::endl;
    }
};

// Subsystem 2
class Lights {
public:
    void TurnOn() { std::cout << "Lights on" << std::endl; }

    void TurnOff()
    {
        std::cout << "Lights off" << std::endl;
    }
};

// Facade
class Car {
private:
    Engine engine;
    Lights lights;

public:
    void StartCar()
    {
        engine.Start();
        lights.TurnOn();
        std::cout << "Car is ready to drive" << std::endl;
    }

    void StopCar()
    {
        lights.TurnOff();
        engine.Stop();
        std::cout << "Car has stopped" << std::endl;
    }
};

int main()
{
    // Using the Facade to start and stop the car
    Car car;
    car.StartCar();
    // Simulate some driving
    car.StopCar();
    return 0;
}
