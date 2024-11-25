// #include<iostream>
// using namespace std;

// static int iCounter=0;

// void errorfun()
// {
//     throw 1;
// }

// void myfunc()
// {
//     iCounter++;
//     int *ptr=new int;
//     *ptr=5;
//     if(iCounter%2==0)
//         errorfun();
//     // cout<<*ptr<<endl;
//     delete ptr;
    
// }
// void main()
// {
//     try
//     {
//     myfunc();//memory leak happen
//     myfunc();
//     myfunc();//memory leak happen
//     myfunc();
//     myfunc();//memory leak happen

//     }
//     catch(...)
//     {

//     }
// return 0;
// }


void main()
{
    auto_ptr<int> ptr(new int);//int *ptr=new int;

    *ptr=40;
    throw;
}