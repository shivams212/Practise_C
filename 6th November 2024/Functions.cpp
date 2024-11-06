#include <iostream>
using namespace std;
//Doubt
void sum(int n) {
    cout << "Sum function with parameter: " << n << endl;
}

void sum(int x = 2) {
    cout << "Sum function with default parameter: " << x << endl;
}

int main() {
    sum(2);  // This will cause a compilation error due to ambiguity.
    return 0;
}
