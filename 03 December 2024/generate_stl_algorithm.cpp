// //Generate 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> vec(5);

//     int counter=1;

//     generate(vec.begin(),vec.end(),[&counter]()
//     {
//         return counter++;
//     });

//     cout<<"Generated elements are: ";
//     for(auto i:vec)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <cstdlib>

// using namespace std;

// int main()
// {
//     vector<int> vec(5);

//     generate(vec.begin(),vec.end(),[]()
//     {
//         return rand() % 100;
//     });

//     cout<<"Generated elements are:";
//     for(int i : vec)
//     {
//         cout<<i<<" ";
//     }
//         return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime> // For time()

using namespace std;

int main() {
    vector<int> vec(5);

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate random numbers for the vector
    generate(vec.begin(), vec.end(), []() {
        return rand() % 100; // Random number between 0 and 99
    });

    // Print the generated elements
    cout << "Generated elements are: ";
    for (int i : vec) {
        cout << i << " ";
    }

    return 0;
}
