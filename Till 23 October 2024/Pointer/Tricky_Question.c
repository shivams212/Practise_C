#include<stdio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);//10

    printf("%d %d %d\n",(*p)++,*p++,*++p);//-1 11 11
    printf("%d\n",(*p)++);//0  //bracket having higher precedence than ++
    printf("%d",*p);//0
    q=p+3;
    printf("%d\n",*q-3);//2

    printf("%d\n",*--p+5);//16
   
    printf("%d\n",*p+*q);//16
    return 0;
}