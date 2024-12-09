//fill
//syntax:-
//fill(start_iterator,end_iterator,value)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> vec(5);

//     fill(vec.begin(),vec.end(),7);

//     cout<<"Vector after fill: ";
//     for(int i:vec)
//     {
//         cout<<i<<" ";
//     }

//     return 0;
// }

// 2. Filling Part of a Vector

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     vector<int> vec={1,2,3,4,5};

//     fill(vec.begin(),vec.begin()+3,9);

//     cout<<"Vector after partial fill: ";

//     for(int i:vec)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }


// Vector after partial fill: 9 9 9 4 5

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6];
    fill(arr,arr+6,42);

    cout<<"Array after fill: ";
    for(auto i :arr)
    cout<<i<<" ";

    
    return 0;
}