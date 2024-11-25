#include <stdio.h>

int main() {
    // int x = 10;      // A normal integer variable
    // int *p = &x;     // p is a pointer to int and stores the address of x

    // printf("Value of x: %d\n", x);          // 10
    // printf("Address of x: %p\n", &x);       // Some memory address (e.g., 0x7ffd38e7a8)
    // printf("Value stored in p: %p\n", p);   // Same address as &x
    // printf("Value pointed to by p: %d\n", *p); // 10 (value at the address stored in p)
    
    // *p = 20;         // Change the value at the address stored in p
    // printf("New value of x: %d\n", x);      // 20

    int num=5;
    int *ptr=&num;
    printf("Printing num value tha is 5%d\n",num);
    // printf("Printing num value tha is 5%p\n",&num);
    printf("Printing address of num that is ..%p\n",ptr);
    printf("Printing value which are stored in *ptr: %d\n",*ptr);

    num++;
    printf("%x\n",num);
    ++num;
    printf("%x\n",num);


    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<5;i++)
    {
        printf("%p\n",&arr[i]);
    }

    int number=5;
    printf("Number is: %d\n",number);

    //address of Operator -We can see from &

    int *ptrr=&number;

    printf("Address is:%x\n",ptrr);//op-5
    printf("Address is:%x\n",*ptrr);//ptr adress value

    double d=4.3;
    double *p2=&d;

    printf("Address is:%x\n",p2);//op-5
    printf("Address is:%.2f\n",*p2);//ptr adress value

    printf("size of integer is%d\n",sizeof(num));
    printf("size of pointer is%d\n",sizeof(ptrr));
    printf("size of pointer is%d\n",sizeof(p2));

    return 0;
}
