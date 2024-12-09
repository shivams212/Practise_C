#include <iostream>
#include <vector>
#include <algorithm> // For std::generate

int main() {
    std::vector<int> numbers(10);
    int value = 1;

    // Generate a sequence of numbers: 1, 2, 3, ..., 10
    std::generate(numbers.begin(), numbers.end(), [&value]() {
        return value++;
    });

    std::cout << "Generated sequence: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm> // For std::generate
// #include <cstdlib>   // For std::rand

// int main() {
//     std::vector<int> random_numbers(5);

//     // Generate 5 random numbers
//     std::generate(random_numbers.begin(), random_numbers.end(), []() {
//         return std::rand() % 100; // Random number between 0 and 99
//     });

//     std::cout << "Random numbers: ";
//     for (int num : random_numbers) {
//         std::cout << num << " ";
//     }

//     return 0;
// }
