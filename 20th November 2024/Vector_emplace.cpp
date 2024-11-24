// // // In C++, vector emplace() is used to insert elements at the given position in a vector by constructing it in-place within the vector, rather than creating a temporary object and then moving or copying it into the vector.

// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main()
// // {
// //     vector<int> v={1,5,8};
// //     v.emplace(v.begin()+2,6);//Inserting 6 with 3rd index
// //     v.emplace(v.end(),9);//Inserting 6 with 3rd index
// //     for(auto i:v)   cout<<i<<" ";
// // }

// #include <bits/stdc++.h>
// using namespace std;

// // Custom Type
// class A {
//   public:
//   int a, b, c;
//   A(int x = 0, int y = 0, int z = 0):
//     a(x), b(y), c(z) {}
// };

// int main() {
//     vector<A> v = {{1, 4, 5}};

//     // Insert an element at index 1
//     v.emplace(v.begin() + 1, 2, 3, 6);

//     for (auto i : v)
//         cout << i.a << " " << i.b << " "
//               << i.c << endl;

//               v.
//     return 0;
// }

// C++ program to insert into vector of string
// using vector::emplace_back()
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;

    // Using emplace_back to insert elements
    v.emplace_back("Hello");
    v.emplace_back("This");
    v.emplace_back("is Shivam");
   
    // Output the elements of the vector
    for (auto i: v)
        cout << i << " ";
    return 0;
}