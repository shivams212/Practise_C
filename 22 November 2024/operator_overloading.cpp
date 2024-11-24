// // #include<iostream>

// // using namespace std;

// // class Complex
// // {
// //     float real,imag;
// //     public:
// //     Complex(float r=0,float i=0):real(r),imag(i){}

// //     //Overloading the '+' operator
// //     Complex operator+(const Complex& other)
// //     {
// //         return Complex(real+other.real,imag+other.imag);
// //     }

// //     void display()
// //     {
// //         cout<<real<<"+"<<imag<<"i"<<endl;
// //     }
// // };

// // int main()
// // {

// //     Complex c1(2.3,4.5);
// //     Complex c2(4.1,9.5);
// //     Complex c3=c1+c2;//Internally compiler will do like this c1.add(c2);

// //     c3.display();
// //     // int a=5;
// //     // int b=10;
// //     // int c=a+b;
// //     // cout<<c;
// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// class Box
// {
//     private:
//     int length,width;

//     public:
//     Box(int l,int w):length(l),width(w) {}

//     //Overloading the == operator
//     bool operator==(const Box& other) const{
//         return (length==other.length && width==other.width);
//     }

// };
// int main()
// {

//     //==
//     Box b1(5,10),b2(5,10),b3(3,6);

//     cout<< (b1==b2)<<endl;
//     cout<< (b1==b3)<<endl;

//     // int a=5;
//     // int b=6;
//     // if(a==b)    cout<<"a and b same";
//     // else   cout<<"a and b not same";
// }

#include<iostream>
using namespace std;

class Sub
{
    int real,imag;

    public:
    Sub(int a=0,int b=0):real(a),imag(b) {}

    Sub operator-(const Sub& other)
    {
        return Sub(real-other.real,imag-other.imag);
    }

    void display()
    {
        cout<<real<<"- "<<imag<<"i "<<endl;
    }
};
int main()
{
    Sub c1(20,1),c2(10,2);
    Sub c3=c1-c2;
    c3.display();
}