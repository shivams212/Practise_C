// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {

//     vector<int> vec={1,2,3,4,5};
//     vector<int> result(vec.size());

//     transform(vec.begin(),vec.end(),result.begin(),[](int x)
//     {
//         return x*x;
//     });

//     cout<<"After Transformation ";
//     for(int x:result)
//     {
//         cout<<x<<" ";
//     }

// return 0;
// }

// After Transformation 1 4 9 16 25


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    vector<int> result(vec1.size());

    // Add elements of vec1 and vec2
    transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), [](int a, int b) {
        return a + b;
    });

    // Print the result
    cout << "Transformed elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}
