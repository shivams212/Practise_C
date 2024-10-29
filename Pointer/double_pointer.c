//  #include<stdio.h>
//  int main()
//  {
//     int a=10;
//     int *p=&a;
//     int * *q=&p;
//     // int * *q=25;
//     // int *q=25;
//     int ** *r=&q;
    

//     printf("a=%d %d %d %d %d",a,*p,**q ,p,(*(*(*r))));
//     return 0;
//  }

#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=12;
    **q=17;//updating the value of a using pointer
    ***r=78;

    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("Address of q is: %x %x\n",r,&q);
    printf("Address of p is: %x %x\n",q,&p);
    printf("Address of r is: %x \n",&r);
    return 0;
}