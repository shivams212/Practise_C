// // #include <iostream>
// // #include <set>

// // // Custom comparator
// // struct CustomComparator {
// //     bool operator()(char a, char b) const {
// //         // Custom comparison logic
// //         return a < b; // Sort in descending order
// //     }
// // };

// // int main() {
// //     // Declare a set with the custom comparator
// //     std::set<char, CustomComparator> a = {'H', 'E', 'L', 'L', 'O'};

// //     // Print the set
// //     for (char c : a) {
// //         std::cout << c << " ";
// //     }

// //     return 0;
// // }


// // C++ program to demonstrate the creation of descending
// // order set container
// // #include <iostream>
// // #include <set>
// // using namespace std;

// // int main()
// // {

// //     set<int , greater<int>> s1;
// //     s1.insert(10);
// //     s1.insert(5);
// //     s1.insert(12);
// //     s1.insert(4);

// //     for (auto i : s1) {
// //         cout << i << ' ';
// //     }
// //     cout<<endl;
// //     cout<<s1.size();
// //     return 0;
// // }


// //----------------------
// // C++ program to demonstrate various functions of
// // STL
// #include <iostream>
// #include <iterator>
// #include <set>
// using namespace std;

// int main()
// {
//     // empty set container
//     set<int, greater<int> > s1;

//     // insert elements in random order
//     s1.insert(40);
//     s1.insert(30);
//     s1.insert(60);
//     s1.insert(20);
//     s1.insert(50);

//     // only one 50 will be added to the set
//     s1.insert(50);
//     s1.insert(10);

//     // printing set s1
//     set<int, greater<int> >::iterator itr;
//     cout << "\nThe set s1 is : \n";
//     for (itr = s1.begin(); itr != s1.end(); itr++) {
//         cout << *itr << " ";
//     }
//     cout << endl;

//     // assigning the elements from s1 to s2
//     set<int> s2(s1.begin(), s1.end());

//     // print all elements of the set s2
//     cout << "\nThe set s2 after assign from s1 is : \n";
//     for (itr = s2.begin(); itr != s2.end(); itr++) {
//         cout << *itr << " ";
//     }
//     cout << endl;

//     // remove all elements up to 30 in s2
//     cout << "\ns2 after removal of elements less than 30 "
//             ":\n";
//     s2.erase(s2.begin(), s2.find(30));
//     for (itr = s2.begin(); itr != s2.end(); itr++) {
//         cout << *itr << " ";
//     }

//     // remove element with value 50 in s2
//     int num;
//     num = s2.erase(50);
//     cout << "\ns2.erase(50) : ";
//     cout << num << " removed\n";
//     for (itr = s2.begin(); itr != s2.end(); itr++) {
//         cout << *itr << " ";
//     }

//     cout << endl;

//     // lower bound and upper bound for set s1
//     cout << "s1.lower_bound(40) : "
//          << *s1.lower_bound(40) << endl;
//     cout << "s1.upper_bound(40) : "
//          << *s1.upper_bound(40) << endl;

//     // lower bound and upper bound for set s2
//     cout << "s2.lower_bound(40) : "
//          << *s2.lower_bound(40) << endl;
//     cout << "s2.upper_bound(40) : "
//          << *s2.upper_bound(40) << endl;

//     return 0;
// }

#include<iostream>
#include<set>

using namespace std;

int main()

{
    set<int> st={34,67,12};
    //insert single elements
    auto it=st.begin();

    st.insert(it,2090);
    for(auto i:st)  cout<<i<<" ";

    cout<<endl;
    //insert multiple elements
    st.insert({12,11,10,9,22});

    for(auto i:st)  cout<<i<<" ";

    cout<<endl;
    // Example: Removing the Given Element Using set::erase()

    st.erase(2090);
    for(auto i:st)  cout<<i<<" ";
";
    return 0;
}