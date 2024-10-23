#include<stdio.h>

int main()
{
//Write a program to take an integer input from the user using scanf and print it using printf

// int n;
// printf("Enter the Integer Value:");
// scanf("%d",&n);
// printf("The entered value is: %d",n);

//How can you use scanf to read a floating-point number? Provide an example

// float n1;
// scanf("%f",&n1);
// printf("%f",n1);

//Create a C program to input a person's name (as a string), age (as an integer), and height (as a float), and display the information using printf.

int name[25];
int age;
float height;
printf("ENter the value of name ,age and height:");

scanf(" %s,%d,%f",&name,&age,&height);
printf("%s,%d,%f",name,age,height);


}