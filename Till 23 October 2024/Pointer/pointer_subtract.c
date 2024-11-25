#include<stdio.h>
int main()
{

    int a[]={2,4,3,0,-7};
    
    int *p=a;//It will point to base address  // int *p=&a[0];
    int *q=&a[3];//It will stores address of a[3]

    printf("q-p=%d\n",q-p);//3
    printf("p-q=%d\n",p-q);//-3

    printf("Value =%d\n",*q);//0
    q=q-2;
    printf("Value =%d\n",*q);//4
    p=p+2;
    printf("Value =%d\n",*q);//3
    p=p+2;
    printf("p-q=%d\n",q-p);
    q=q-2;
    printf("Value =%d\n",*q);//garbage value out of bound

// q-p=3
// p-q=-3
// Value =0
// Value =4
    return 0;
}
