#include <iostream>
#include <vector>
using namespace std;
 
class MyClass {
public:
    MyClass(int val) : data(val) {}
    MyClass(const MyClass& other) {
        data = other.data;
        cout << "Copy constructor called for " << data << endl;
    }
    int getData() const { return data; }
 
private:
    int data;
};
 
int main() {
    // vector<MyClass> myVector = {MyClass(1), MyClass(2), MyClass(3)};
    vector<MyClass>myVector;
 
    myVector.emplace_back(MyClass(1));
    myVector.emplace_back(MyClass(2));
    myVector.emplace_back(MyClass(3));
 
    // Range-based for loop without reference (invokes copy constructor)
    for (const auto& item : myVector) {
        cout << "Data: " << item.getData() << endl;
    }
 
    return 0;
}