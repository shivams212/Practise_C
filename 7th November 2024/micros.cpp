#include <iostream> 
using namespace std; 

// macro with parameter 
#define MAXIMUM(a, b) (a > b) ? a : b 

// Main function for the program 
int main() 
{ 
	cout << "Max (100, 1000):"; 
	int k = MAXIMUM(100, 1000); 
	cout << k << endl; 

	cout << "Max (20, 0):"; 
	int k1 = MAXIMUM(20, 0); 
	cout << k1; 

	return 0; 
} 


