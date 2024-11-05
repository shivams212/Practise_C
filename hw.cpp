#include <iostream>
using namespace std;

// Base class for all patients
class Patient {
protected:
    static int totalPatients; // Static variable to keep track of total patients

public:
    // Static function to get the total patient count
    static int getTotalPatients() {
        return totalPatients;
    }
};

// Initializing static member
int Patient::totalPatients = 0;

// Derived class for Inpatients
class Inpatient : public Patient {
public:
    Inpatient() {
        ++totalPatients; // Increment total patients when an inpatient is created
    }
};

// Derived class for Outpatients
class Outpatient : public Patient {
public:
    Outpatient() {
        ++totalPatients; // Increment total patients when an outpatient is created
    }
};

// Derived class for Critical Care Patients
class CriticalCarePatient : public Patient {
public:
    CriticalCarePatient() {
        ++totalPatients; // Increment total patients when a critical care patient is created
    }
};

int main() {
    // Creating instances of different types of patients
    Inpatient inpatient1, inpatient2;
    Outpatient outpatient1;
    CriticalCarePatient criticalPatient1, criticalPatient2, criticalPatient3;

    // Access total patients using the static function from the base class
    cout << "Total number of patients: " << Patient::getTotalPatients() << endl;

    return 0;
}
