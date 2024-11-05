#include <iostream>
using namespace std;

void modifyValue(int num) {
    num = 20; // This change will not affect the original variable
    cout << "Inside function (by value), num is: " << num << endl;
}

int main() {
    int original = 10;
    cout << "Before function call, original is: " << original << endl;
    modifyValue(original);
    cout << "After function call, original is: " << original << endl; // Remains unchanged
    return 0;
}


/*
Before function call, original is: 10
Inside function (by value), num is: 20
After function call, original is: 10
*/