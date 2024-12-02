#include <iostream>
#include <list>
#include <algorithm> // For STL algorithms
#include <numeric>   // For accumulate
#include <string>
#include <iterator>  // For ostream_iterator
using namespace std;

// User-defined class: Vehicle
class Vehicle {
public:
    string name;
    int speed;

    Vehicle(string name, int speed) : name(name), speed(speed) {}

    // Overloading < operator for comparison (needed for sort and binary_search)
    bool operator<(const Vehicle& other) const {
        return speed < other.speed;
    }

    // Overloading == operator for comparison (needed for find and count)
    bool operator==(const Vehicle& other) const {
        return name == other.name && speed == other.speed;
    }
};

// Function to print the list of vehicles
void printList(const list<Vehicle>& vehicles) {
    for (const auto& v : vehicles) {
        cout << v.name << " (Speed: " << v.speed << ")" << endl;
    }
    cout << endl;
}

// Custom function for accumulate (sum of speeds)
int sumSpeeds(int total, const Vehicle& v) {
    return total + v.speed;
}

int main() {
    // List of vehicles
    list<Vehicle> vehicles = {
        {"Car", 120},
        {"Bike", 80},
        {"Truck", 60},
        {"Bus", 70},
        {"Bicycle", 20}
    };

    cout << "Original list of vehicles:\n";
    printList(vehicles);

    // Sort the vehicles based on speed
    vehicles.sort();
    cout << "Sorted vehicles (by speed):\n";
    printList(vehicles);

    // Reverse the list
    vehicles.reverse();
    cout << "Reversed vehicles:\n";
    printList(vehicles);

    // Find the vehicle with maximum speed
    auto maxSpeedVehicle = *max_element(vehicles.begin(), vehicles.end());
    cout << "Vehicle with maximum speed: " << maxSpeedVehicle.name << " (" << maxSpeedVehicle.speed << ")\n";

    // Find the vehicle with minimum speed
    auto minSpeedVehicle = *min_element(vehicles.begin(), vehicles.end());
    cout << "Vehicle with minimum speed: " << minSpeedVehicle.name << " (" << minSpeedVehicle.speed << ")\n";

    // Accumulate the total speed of all vehicles
    int totalSpeed = accumulate(vehicles.begin(), vehicles.end(), 0, sumSpeeds);
    cout << "Total speed of all vehicles: " << totalSpeed << endl;

    // Count the occurrences of a specific vehicle
    Vehicle targetVehicle("Bus", 70);
    int countBus = count(vehicles.begin(), vehicles.end(), targetVehicle);
    cout << "Count of Bus in the list: " << countBus << endl;

    // Find a specific vehicle
    auto foundVehicle = find(vehicles.begin(), vehicles.end(), targetVehicle);
    if (foundVehicle != vehicles.end()) {
        cout << "Found vehicle: " << foundVehicle->name << " (" << foundVehicle->speed << ")\n";
    }
    else {
        cout << "Vehicle not found.\n";
    }

    // Binary search (requires sorted list)
    vehicles.sort(); // Sort again before binary search
    bool isBikePresent = binary_search(vehicles.begin(), vehicles.end(), Vehicle("Bike", 80));
    cout << "Is Bike with speed 80 present? " << (isBikePresent ? "Yes" : "No") << endl;

    // Lower bound (requires sorted list)
    auto lower = lower_bound(vehicles.begin(), vehicles.end(), Vehicle("", 70),
        [](const Vehicle& v1, const Vehicle& v2) { return v1.speed < v2.speed; });
    if (lower != vehicles.end()) {
        cout << "Lower bound for speed 70: " << lower->name << " (" << lower->speed << ")\n";
    }
    else {
        cout << "Lower bound not found.\n";
    }

    // Upper bound (requires sorted list)
    auto upper = upper_bound(vehicles.begin(), vehicles.end(), Vehicle("", 70),
        [](const Vehicle& v1, const Vehicle& v2) { return v1.speed < v2.speed; });
    if (upper != vehicles.end()) {
        cout << "Upper bound for speed 70: " << upper->name << " (" << upper->speed << ")\n";
    }
    else {
        cout << "Upper bound not found.\n";
    }

    return 0;
}
