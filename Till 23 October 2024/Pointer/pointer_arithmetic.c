#include<stdio.h>
int main()
{
    // int a=10;
    // int *p=&a;

    // printf("%x\n",p);
    // printf("%d\n",*p);
    //  p=p+2;
    // printf("%x\n",p);
    // printf("%d\n",*p);


    // int a=10;
    // int *p=&a;
    // printf("%x\n",p);
    // p=p+2;
    // printf("%x",p);

    int a[5]={0,1,-1,10,11};
    int *p=&a[0];
    int *q=&a[0];
    // p=p+q;

    printf("value is: %d\n",*p); //op-1
    printf("Address of element is: %u\n",p);
    p=p+3;//doubt when i do p=p+2 then it will be addition +2 in address of p
    *p=24;
    //p+2:-value won't increment here because we are not incrementing value here thats'why
    printf("value is: %d\n",*p); // o/p--1
    printf("Address of p pointer with addition of p: %u\n",p);

    



    return 0;
}