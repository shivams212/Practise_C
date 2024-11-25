#include<iostream>
using namespace std;



class Hospital
{
    private:
    int totalPatient;
    int inPatientCount;
    int outPatientCount;
    int criticalPatientCount;

    public:
    // Constructor to initialize counts to zero
    Hospital() :totalPatient(0),inPatientCount(0),outPatientCount(0),criticalPatientCount(0){}

    //Method to add a patient based on type
    void addPatient(int patientType)
    {
        switch(patientType)
        {
            case 1:
            inPatientCount++;
            cout<<"In patient added."<<endl;
            break;

            case 2:
            outPatientCount++;
            cout<<"Out-patient added."<<endl;
            break;

            case 3:
            criticalPatientCount++;
            cout<<"Critical Patient added."<<endl;
            break;

            default:
            cout<<"Invalid patient type."<<endl;
            return;
        }
        //Increment total count of patient if it is valid
        totalPatient++;
    }

    void displayCounts()
    {
        cout<<"\n---Patient Count Summary---"<<endl;
        cout<<"Total Patients: "<<totalPatient<<endl;
        cout<<"In-Patients: "<<inPatientCount<<endl;
        cout<<"Out-Patients: "<<outPatientCount<<endl;
        cout<<"Critical Patients: "<<criticalPatientCount<<endl;
    }
};

int main()
{
    Hospital hospital;
    int choice;

    do
    {
     cout << "\nSelect patient type to add:" << endl;
        cout << "1. In-Patient" << endl;
        cout << "2. Out-Patient" << endl;
        cout << "3. Critical Patient" << endl;
        cout << "4. Display Patient Count Summary" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            case 2:
            case 3:
                hospital.addPatient(choice);
                break;
            case 4:
                hospital.displayCounts();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
return 0;
}