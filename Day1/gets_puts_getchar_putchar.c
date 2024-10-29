#include<stdio.h>
//In C programming, gets, puts, getchar, and putchar are functions used for handling input and output operations related to strings and characters

// gets() is considered unsafe because it does not check the buffer size, leading to buffer overflow vulnerabilities.
// In modern C (C11 and later), gets() has been removed from the standard library. Instead, it is recommended to use fgets() to prevent buffer overflows.

// The gets function is used to read a line of input (a string) from the user, including spaces until a newline (\n) is encountered. It stores the input in a character array (string).
int main()
{
char name[50];
printf("Enter your name: ");
gets(name);
printf("Hello, %s!\n", name);
 
}