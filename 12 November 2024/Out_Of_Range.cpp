#include <iostream>
#include <vector>
#include <exception>
using namespace std;

void accessVectorElement(vector<int>& vec, int index) {
    try {
        cout << "Accessing element at index " << index << ": " << vec.at(index) << endl;
    }
    catch (out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    accessVectorElement(vec, 2); // Valid
    accessVectorElement(vec, 10); // Out of range
    return 0;
}
