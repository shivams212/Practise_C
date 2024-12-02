#include <iostream>
#include <memory>
#include <string>

// class Employee;

class Department {
public:
    std::string name;
    std::weak_ptr<Employee> manager; // Use weak_ptr to avoid circular dependency

    Department(const std::string& deptName) : name(deptName) {
        std::cout << "Department created: " << name << "\n";
    }

    ~Department() {
        std::cout << "Department destroyed: " << name << "\n";
    }

    void showManager() const {
        if (auto mgr = manager.lock()) { // Check if the manager still exists
            std::cout << "Manager of " << name << ": " << mgr->name << "\n";
        } else {
            std::cout << name << " has no manager.\n";
        }
    }
};

class Employee {
public:
    std::string name;
    std::shared_ptr<Department> department; // Shared ownership with Department

    Employee(const std::string& empName) : name(empName) {
        std::cout << "Employee created: " << name << "\n";
    }

    ~Employee() {
        std::cout << "Employee destroyed: " << name << "\n";
    }
};

int main() {
    {
        auto dept = std::make_shared<Department>("Engineering");
        auto emp = std::make_shared<Employee>("John Doe");

        dept->manager = emp; // Weak reference to the manager
        emp->department = dept; // Shared reference to the department

        dept->showManager(); // Output: Manager of Engineering: John Doe
    }
    // Both Department and Employee objects are destroyed without memory leaks.
    return 0;
}
