// #include<stdio.h>
// int main()
// {
//     int a=11,b=12;
//     int *p,*q;
//     printf("%p %p",p,q);

//     p=&a;
//     q=&b;
//     printf("\n%p %p",p,q);

//     return 0;
// }
#include<stdio.h>
int main()
{
    int a=11,b=12;
    int *p,*q;
    p=&a;
    q=&b;

    *q=*p;//updating value of q
    printf("\na= %d %d %d",a, *p,*q);// o/p 11 11 11

    return 0;
}