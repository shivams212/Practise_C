#include <iostream>
using namespace std;

void modifyValue(int& num) { // Note the '&' indicating pass by reference
    num = 20; // This change will affect the original variable
    cout << "Inside function (by reference), num is: " << num << endl;
}

int main() {
    int original = 10;
    cout << "Before function call, original is: " << original << endl;
    modifyValue(original);
    cout << "After function call, original is: " << original << endl; // Value is changed
    return 0;
}
