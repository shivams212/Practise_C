// C++ program to illustrate Pointer Arithmetic
#include <iostream>
using namespace std;
void geeks()
{
    // Declare an array
    int v[3] = { 10, 100, 200 };

    // declare pointer variable
    int* ptr;

    // Assign the address of v[0] to ptr
    ptr = v;

    for (int i = 0; i < 3; i++) {
        cout << "Value at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";

        // Increment pointer ptr by 1
        ptr++;
    }
}

// Driver program
int main() { 
    geeks();

int nums[2][3]  =  { { 16, 18, 20 }, { 25, 26, 27 } };

    cout<< *(*(nums+0)+0)<<endl;
    cout<<*(*nums)<<endl;
    cout<<*(*nums+1)<<endl;
    cout<<*(*nums+2)<<endl;
    cout<<*(*(nums+1))<<endl;
    cout<<*(*(nums+1)+1)<<endl;
    cout<<*(*(nums+1)+2)<<endl;
    cout<<*(*(nums+1)+3)<<endl;

     }
