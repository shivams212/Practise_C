#include <iostream> 
using namespace std; 

// Inline function 
inline int Maximum(int a, int b) 
{ 
	return (a > b) ? a : b; 
} 

// Main function for the program 
int main() 
{ 
	cout << "Max (100, 1000):" << Maximum(100, 1000) << endl; 
	cout << "Max (20, 0): " << Maximum(20, 0) << endl; 

	return 0; 
} 
