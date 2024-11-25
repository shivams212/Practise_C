#include<iostream>
using namespace std;
// int findmax(int a,int b)
// {
//     return a>b?a:b;
// }


// double findmax(double a,double b)
// {
//     return a>b?a:b;
// }

// char findmax(char a,char b)
// {
//     return a>b?a:b;
// }

//Below code is template,without template we have to override the function
template<typename T>
T findMax(T a,T b)
{
    return a>b?a:b;
}

template<typename T1,typename T2>
auto findMaxi(T1 a,T2 b)
{
    return a>b?a:b;
}


int main()
{
    // cout<<(int)findmax('A','Z')<<endl;//o/p-4
    cout<<findMax(4.5,5.4)<<endl;
    cout<<findMaxi(4,5.1)<<endl;

    cout << "Max of 5 and 10.5: " << findMaxi(5, 10.5) << endl;       // int and double
    cout << "Max of 3.3 and 2: " << findMaxi(3.3, 2) << endl;         // double and int
    cout << "Max of 'A' and 99: " << findMaxi('A', 99) << endl;       // char and int


    
}