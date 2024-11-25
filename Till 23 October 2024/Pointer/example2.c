#include<stdio.h>
int main()
{

    int a=5;//Declaration of Pointer
    int *ptr=&a; //This is initialization of pointer,here we can give value whose data type is int
    printf("\nSIze of pointer is%d\n\n ",sizeof(ptr));


    printf("Address of 5 is: %p\n",ptr); //o/p-0061FF18
    printf("Address of 5 is: %x\n",*ptr);

     int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //  char c[10]={'a','b','c'};
    for (int  i = 1; i <= 10; i++)
    {
        printf("Address of %d %p\n",i, &arr[i]);
    }
    //Address of 5 is: 0061FF10
    // Address of 5 is: 5
    // Address of 1 0061FEEC
    // Address of 2 0061FEF0
    // Address of 3 0061FEF4
    // Address of 4 0061FEF8
    // Address of 5 0061FEFC
    // Address of 6 0061FF00
    // Address of 7 0061FF04
    // Address of 8 0061FF08
    // Address of 9 0061FF0C
    // Address of 10 0061FF10

    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
     char c[10]={'a','b','c'};
    for (int  i = 1; i <= 10; i++)
    {
        printf("Address of %d %p\n",i, &c[i]);
    }

    // o/p-Address of 5 is: 0061FF14
    // Address of 5 is: 5
    // Address of 1 0061FF0B
    // Address of 2 0061FF0C
    // Address of 3 0061FF0D
    // Address of 4 0061FF0E
    // Address of 5 0061FF0F
    // Address of 6 0061FF10
    // Address of 7 0061FF11
    // Address of 8 0061FF12
    // Address of 9 0061FF13
    // Address of 10 0061FF14
        

        double arr1[10]={1,2,3,4,5,6,7,8,9,10};
    //  char c[10]={'a','b','c'};
    for (int  i = 1; i <= 10; i++)
    {
        printf("Address of %d %p\n",i, &arr1[i]);
    }

    return 0;
}