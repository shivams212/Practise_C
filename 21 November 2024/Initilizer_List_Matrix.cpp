#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;

class Matrix {
    vector<vector<int>> data; // To store the matrix

public:
    // Constructor with an initializer list of initializer lists
    Matrix(initializer_list<initializer_list<int>> m) {
        for (auto row : m) {
            data.push_back(vector<int>(row)); // Convert each row to a vector and store
            
        }
    }

    // Method to display the matrix
    void display() const {
        for (const auto& row : data) {
            for (const auto& val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    // 3x3 matrix initialization
    Matrix m1({ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} });

    // 2x4 matrix initialization
    Matrix m2({ {1, 2, 3, 4}, {5, 6, 7, 8} });

    cout << "Matrix m1:" << endl;
    m1.display();

    cout << "Matrix m2:" << endl;
    m2.display();

    return 0;
}
