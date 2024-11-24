// // #include <iostream>
// // #include <set>
// // using namespace std;

// // struct CustomCompare {
// //     bool operator()(int a, int b) const {
// //         // Custom logic: Sort in descending order
// //         return a > b;
// //     }
// // };

// // int main() {
// //     // Declare set with custom comparator
// //     set<int, CustomCompare> customSet = {1, 5, 3, 7, 2};

// //     for (int val : customSet)
// //         cout << val << " "; // Output: 7 5 3 2 1

// //     return 0;
// // }


// #include <iostream>
// #include <set>
// #include <string>

// struct Person {
//     std::string name;
//     int age;

//     Person(std::string n, int a) : name(n), age(a) {}
// };

// struct ComparePersons {
//     bool operator()(const Person& p1, const Person& p2) const {
//         // Custom logic: Sort by age, then by name
//         if (p1.age != p2.age)
//             return p1.age < p2.age;
//         return p1.name < p2.name;
//     }
// };

// int main() {
//     std::set<Person, ComparePersons> people = {
//         {"Alice", 30},
//         {"Bob", 25},
//         {"Charlie", 25},
//         {"David", 35}
//     };

//     for (const auto& person : people)
//         std::cout << person.name << " (" << person.age << ")\n";
//     // Output:
//     // Bob (25)
//     // Charlie (25)
//     // Alice (30)
//     // David (35)

//     return 0;
// }


#include <iostream>
#include <set>

// Define the custom comparator class
class myClass11 {
public:
    // Overload operator() to define custom sorting
    bool operator()(int x, int y) const {
        return x > y; // Sort in descending order
    }
};

int main() {
    // Define a set with the custom comparator
    std::set<int, myClass11> mySet1;

    // Insert elements into the set
    mySet1.insert(1);
    mySet1.insert(2);
    mySet1.insert(3);
    mySet1.insert(4);

    // Print elements of the set
    for (int x : mySet1) {
        std::cout << x << std::endl; // Output: 4 3 2 1 (descending order)
    }

    return 0;
}
