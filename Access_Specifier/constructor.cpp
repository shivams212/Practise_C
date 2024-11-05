// Example to show defining
// the constructor within the class

#include <iostream>
using namespace std;

// Class definition
class student {
    int rno;
    char name[50];
    double fee;

public:
    /*
    Here we will define a constructor
    inside the same class for which
    we are creating it.
    */
    student()
    {
        // Constructor within the class

        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }

    // Function to display the data
    // defined via constructor
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};

int main()
{

    student s;
    /*
    constructor gets called automatically
    as soon as the object of the class is declared
    */

    s.display();
    return 0;
}
