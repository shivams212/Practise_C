#include<vector>
#include<iostream>
#include<initializer_list>
using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(5);
//     v.assign(7,100);

//     for(auto i:v)
//         cout<<i<<" ";

//     cout<<"\n";

//     v.push_back(5);
//     for(auto i:v)
//         cout<<i<<" ";

//     cout<<"\n";
//     //From below code [v.at] is accessing the v at index 3;

//     v.at(2)=9;//updating the value at index 3 in vector
//     cout<<v.at(2);

//     cout<<"\n";

//     for(auto i:v)
//         cout<<i<<" ";
// }


// int main() {
//     vector<int> v = {1, 3, 4, 9};

//     try {
      
//         // Attempting to access out of range index
//         cout << v.at(5) << endl;
      
//     } 
    // catch (const out_of_range& e) {
//         cout << "Exception: " << e.what() << endl;
//     }
  
//     return 0;
// }

// int main()
// {
//     vector<int> v={1,2,3,3,4,5};
//     cout<<v[6];//garbage value
//     cout<<"\n";
//     // cout<<v.back()=9;
//     v.front()=9;//assigning new values here

//     cout<< v.front();
//     cout<<"\n";

//     cout<<v.back();
//     v.

// }

// C++ Program to illustrate the use of
// vector::begin() vector::end() methods
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {9, 11, 15, 56};

//     cout << *v.begin() << endl;//9
//     cout << *(--v.end())<<endl;//56

//     cout<<"The maximum capacity is: "<<v.capacity()<<endl;
//     cout<<"The size of vector is: "<<v.size()<<endl;

//     v.push_back(5);
 
//    cout<<"The maximum capacity is: "<<v.capacity()<<endl;
//     cout<<"The size of vector is: "<<v.size()<<endl;

//     v.push_back(5);
//     v.push_back(5);
//     v.push_back(5);
//     v.push_back(5);
//      cout<<"The maximum capacity is: "<<v.capacity()<<endl;
//     cout<<"The size of vector is: "<<v.size()<<endl;

//     v.clear();
//     if(v.empty())   cout<<"Vector is empty";
//     else    cout<<"Vector is not empty";
// }

// C++ program to demonstrate the use of the 
// vector::erase() method
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v1{11, 15, 23, 49, 2};
//     vector<int> v2{13, 11, 29, 9, 2};
    
//       // Fetching the iterator to 3rd element
//     auto pos = v1.begin() + 2;

//     // Deleting the 3rd element from vector vec1
//     v1.erase(pos);
    
//       // Defining the range from 2nd element to
//     // 4th element of vector vec2
//       auto first = v2.begin() + 1;
//     auto last = v2.begin() + 4;
  
//     // Deleting the elements in the above range
//     v2.erase(first, last);

//     for (auto i : v1)
//         cout << i << " ";
//     cout << endl;

//     for (auto i : v2)
//         cout << i << " ";
//     v2.
//     return 0;
// }

//rbegin(),rend(),crbegin(),crend()
// #include <iostream>
// #include <vector>

// int main() {
//     // Create a vector
//     std::vector<int> vec = {10, 20, 30, 40, 50};

//     // Using rbegin() and rend() to modify elements in reverse
//     std::cout << "Modifying elements using rbegin() and rend():\n";
//     for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
//         *it *= 2; // Multiply each element by 2
//     }

//     // Display the modified vector
//     std::cout << "Modified vector: ";
//     for (int v : vec) {
//         std::cout << v << " ";
//     }
//     std::cout << "\n";

//     // Using crbegin() and crend() for read-only reverse traversal
//     std::cout << "Accessing elements using crbegin() and crend():\n";
//     for (auto it = vec.crbegin(); it != vec.crend(); ++it) {
//         std::cout << *it << " "; // Read-only access
//         // *it += 5; // Uncommenting this line will cause a compilation error
//     }
//     std::cout << "\n";
//     vec.
//     return 0;
// }



// C++ program to demonstrate the
// vector::data() function The std::vector::data() is an STL in C++ which returns a direct pointer to the memory array used internally by the vector to store its owned elements. 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// initialising vector
	vector<int> vec = { 10, 20, 30, 40, 50 };

	// memory pointer pointing to the
	// first element
	int* pos = vec.data();

	// prints the vector
	cout << "The vector elements are: ";
	for (int i = 0; i < vec.size(); ++i)
		cout << *pos++ << " ";

	return 0;
}
