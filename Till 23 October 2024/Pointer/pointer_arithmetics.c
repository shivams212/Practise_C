#include<stdio.h>
int main()

{
    int a[]={3,2,67,0,56};
    int *p;
    // p=a;
    p=&a[2];
    // p=p+2;
    // printf("%d",*(p++));//post increment ->3
    // printf(" %d",*(++p));//post increment ->3 67
    // printf(" %d %d",*p++, *++p);//post increment ->2 2 //evaluation from right to left
    // printf(" %d",*--p);//garbage value
    // printf("%d %d %d",*--p,*--p,*--p);//4200864 3 2
    printf("%d %d %d",--(*p),(*p)++, ++(*p)); // 56 0 0 //Tricky quesion



    return 0;
}