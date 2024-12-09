// // C++ program to demonstrate the use of std::generate 
// #include <iostream> 
// #include <vector> 
// #include <algorithm> 

// // Defining the generator function 
// int gen() 
// { 
// 	static int i = 0; 
// 	return ++i; 
// } 

// using namespace std; 
// int main() 
// { 
// 	// int i; 

// 	// Declaring a vector of size 10 
// 	vector<int> v1(10); 

// 	// using std::generate 
// 	std::generate(v1.begin(), v1.end(), gen); 

// 	vector<int>::iterator i1; 
// 	for (i1 = v1.begin(); i1 != v1.end(); ++i1) { 
// 		cout << *i1 << " "; 
// 	} 
// 	return 0; 
// } 



// #include <iostream>
// #include <vector>
// #include <algorithm> // For std::transform
// #include <cmath>     // For std::sqrt

// int main() {
//     std::vector<int> numbers = {1, 4, 9, 16, 25};
//     std::vector<double> results(numbers.size());

//     // Apply square root to each element
//     std::transform(numbers.begin(), numbers.end(), results.begin(), [](int num) {
//         return std::sqrt(num);
//     });

//     std::cout << "Square roots: ";
//     for (double value : results) {
//         std::cout << value << " ";
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm> // For std::transform

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {10, 20, 30, 40, 50};
    std::vector<int> results(vec1.size());

    // Add corresponding elements from vec1 and vec2
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), results.begin(), [](int a, int b) {
        return a + b;
    });

    std::cout << "Sum of elements: ";
    for (int value : results) {
        std::cout << value << " ";
    }

    return 0;
}
