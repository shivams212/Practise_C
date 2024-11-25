// #include<iostream>
// using namespace std;
// int main()
// {
//     // int x=5,y=0;
//     // int c=x/y;
//     cout<<"hi";
// return 0;
// }

void main()
{
    int *ptr=new int[10];
    int *pp=ptr;
    --pp;
    *ptr=2;
    delete ptr;
    {
        //call dstr
        
    }
    delete[] ptr;

    *ptr=3;
}