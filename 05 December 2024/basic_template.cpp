#include <iostream>
using namespace std;

// General template (for all types)
template <typename T>
void printType() {
    cout << "General template\n";
}

// Template specialization for int
template <>
void printType<int>() {
    cout << "Specialized template for int\n";
}

int main() {
    printType<double>();  // Calls general template
    printType<int>();     // Calls specialized template
    return 0;
}
