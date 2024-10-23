#include<stdio.h>
int main()
{
    // Write a program to print your name, age, and grade using printf with appropriate format specifiers.

    char name[]="Shivam Singh";
    int age=20;
    char grade='A';

    printf("%s,%d,%c\n",name,age,grade);

    //What is the difference between %d and %i in printf when printing integers? Provide examples.

    int n=20;
    printf("%d,%x\n",n,n);

    //How do you print a number in hexadecimal format using printf? Give an example with a number.

    int a=255;
    printf("Hexadecimal number of a: %x\n",a); //output-FF
    printf("Octal Number number of a: %o\n",a);   //output-377

    //Write a C program to print a single character using printf and format specifier %c

    char cc[]="Hello";
    printf("%c\n",cc[0]);

    //What format specifier would you use to print a double-precision floating-point number using printf? Write a small example.

    float num=12.1123;
    printf("%.2f\n",num);

    //How would you use printf to print an unsigned integer? Demonstrate with an example.

    unsigned int nums=1221;
    printf("%u\n",nums);

    //Write a C program to display a sentence with quotes using printf and escape sequences

    char ccc[]="Hello World";
    printf("\"%s\"\n",ccc);

    //Demonstrate how to use the format specifier %o to print an integer in octal format using printf

    int number=17;
    printf("%o\n",number);

    //imp
    //How would you use printf to print a percentage symbol (%)? Explain with a small code snippet.

    int number1=20;
    printf("%d%%",number1);
    return 0;
}