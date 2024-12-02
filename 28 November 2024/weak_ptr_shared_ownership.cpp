#include <iostream>
#include <memory>
#include <string>
using namespace std;

// Forward declaration of Employee
class Employee;

class Department {
public:
    string name;
    weak_ptr<Employee> manager; // Weak reference to avoid circular dependency

    Department(const string& deptName);
    ~Department();
    void showManager() const;
};

class Employee {
public:
    string name;
    shared_ptr<Department> department; // Shared ownership with Department

    Employee(const string& empName);
    ~Employee();
};

// Implementation of Department methods
Department::Department(const string& deptName) : name(deptName) {
    cout << "Department created: " << name << "\n";
}

Department::~Department() {
    cout << "Department destroyed: " << name << "\n";
}

void Department::showManager() const {
    if (auto mgr = manager.lock()) { // Check if the manager still exists
        cout << "Manager of " << name << ": " << mgr->name << "\n"; // Access name of manager
    } else {
        cout << name << " has no manager.\n";
    }
}

// Implementation of Employee methods
Employee::Employee(const string& empName) : name(empName) {
    cout << "Employee created: " << name << "\n";
}

Employee::~Employee() {
    cout << "Employee destroyed: " << name << "\n";
}

int main() {
    {
        auto dept = make_shared<Department>("Engineering");
        auto emp = make_shared<Employee>("John Doe");

        dept->manager = emp; // Weak reference to the manager
        emp->department = dept; // Shared reference to the department

        dept->showManager(); // Output: Manager of Engineering: John Doe
    }
    // Both Department and Employee objects are destroyed without memory leaks.
    return 0;
}
