// The std::unique function in C++ is used to remove consecutive duplicate elements from a range in a container. It is part of the <algorithm> library and works by shifting unique elements to the front of the range and returning an iterator pointing to the new end of the range with unique elements.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> vec={10,20,20,30,40,40,50};

//     auto it=unique(vec.begin(),vec.end());

//     vec.erase(it,vec.end());

//     for(int x: vec)
//     {
//         cout<<x<<" ";
//     }

//     return 0;
// }


//main
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 20, 30, 40, 40, 50};

    // Apply unique but do not erase
    auto it = std::unique(vec.begin(), vec.end());

    // Print the unique range
    std::cout << "Unique range: ";
    for (auto i = vec.begin(); i != it; ++i) {
        std::cout << *i << " ";
    }
    return 0;
}
