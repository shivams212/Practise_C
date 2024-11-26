#include <iostream>
using namespace std ;
 
class MyClass {
private:
    int value;
 
public:
    MyClass(int value) : value(value) {}
 
    void printValue() {
        auto lambda = [this]() {
            cout << "Value: " << value << endl;
        };
        lambda();
    }
 
 
};
 
int main() {
    MyClass obj(10);
    obj.printValue();
 
    return 0;
}