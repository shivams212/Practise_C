#include<stdio.h>
int main()
{
    int a=10,b=5;
    int *p,*q;

    printf("Address of A %p\n\n",&a);
    printf("Address of B%p\n",&b);
    p=(&a,&b);
    printf("Among A and B b address is printing because of precidence:%p\n",p);

    printf("Address of p is %p",&p);
    ++p;
    // printf("Address of p is %p",&p);

    // op-0061FF18
    // 0061FF14
    // 0061FF14 
    // *->Indirection Operator

    return 0;
}