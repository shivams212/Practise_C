// #include <iostream>
// #include <string>
// using namespace std;

// // Define a custom class MyClass
// class MyClass {
// private:
//     string name;
//     int value;

// public:
//     // Constructor
//     MyClass(string n, int v) : name(n), value(v) {}

//     // Method to display object details
//     void display() const {
//         cout << "MyClass [Name: " << name << ", Value: " << value << "]" << endl;
//     }
// };

// // Variadic template function to display multiple MyClass objects
// template <typename... Args>
// void displayObjects(const Args&... args) {
//     // Unpack and call the display method for each object
//     (args.display(), ...);
// }

// int main() {
//     // Create MyClass objects
//     MyClass obj1("Object1", 10);
//     MyClass obj2("Object2", 20);
//     MyClass obj3("Object3", 30);

//     // Call variadic template function with multiple objects
//     displayObjects(obj1, obj2, obj3);

//     return 0;
// }



#include<iostream>
using namespace std;
class MyClass
{
    private:
    string name;
    int value;

    public:
    MyClass(string n,int v):name(n),value(v){}

    void display() const{
        cout<<"MyClass [Name :"<<name<<", Value"<< value<<"]"<<endl;
    }
};


int main()
{

    return 0;
}