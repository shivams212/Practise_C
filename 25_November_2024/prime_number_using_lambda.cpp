// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// //Using FUnction Pointer 

// bool isPrime(int x) {
//     if (x < 2) return false; // Numbers less than 2 are not prime
//     for (int i = 2; i < x; i++) {
//         if (x % i == 0) return false;
//     }
//     return true;
// }

// void printPrime(int n) {
//     if (isPrime(n)) {
//         cout << n << " ";
//     }
// }

// int main() {
//     vector<int> v1 = {10, 13, 15, 21, 23, 29, 31, 35, 40};
//     for_each(v1.begin(), v1.end(), printPrime);
//     cout << endl;
//     return 0;
// }
// // 13 23 29 31 


//using functor
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Prime {
// public:
//     bool isPrime(int x) {
//         if (x < 2) return false; // Numbers less than 2 are not prime
//         for (int i = 2; i < x; i++) {
//             if (x % i == 0) return false;
//         }
//         return true;
//     }

//     void operator()(int n) {
//         if (isPrime(n)) {
//             cout << n << " ";
//         }
//     }
// };

// int main() {
//     vector<int> v1 = {10, 13, 15, 21, 23, 29, 31, 35, 40};
//     for_each(v1.begin(), v1.end(), Prime());
//     cout << endl;
//     return 0;
// }


//using lambda
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {10, 13, 15, 21, 23, 29, 31, 35, 40};

    for_each(v1.begin(), v1.end(), [](int x) {
        bool isPrime = true;
        if (x < 2) isPrime = false; // Numbers less than 2 are not prime
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << x << " ";
        }
    });

    cout << endl;
    return 0;
}

