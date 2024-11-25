// #include<iostream>
// using namespace std;

// Question 1: Basic Class Template
// template<typename T>
// class Box
// {
//     private:
//     T value;
//     public:
//     void setValue(T val)
//     {
//         value=val;
//     }

//     T getValue() const{
//         return value;
//     }
// };

// int main()
// {
//     Box<int> intBox;
//     intBox.setValue(10);
//     cout<<"Integer Box : "<<intBox.getValue()<<endl;

//     Box<string> stringBox;
//     stringBox.setValue("Hello Templates");
//     cout<<"String Box: "<<stringBox.getValue()<<endl; 
// }

// Template with Multiple Parameters
#include<iostream>
using namespace std;
template<typename T1,typename T2>
class Pair
{
    private:
    T1 first;
    T2 second;

    public:
    Pair(T1 f,T2 s):first(f),second(s) {}

    void setFirst(T1 f)
    {
        first=f;
    }
    void setSecond(T2 s)
    {
        second=s;
    }

    T1 getFirst() const{
        return first;
    }

    T2 getSecond() const
    {
        return second;
    }

};

int main()
{
    Pair<int,string> p(1,"One");
    cout<<"Pair: ( "<<p.getFirst()<<", "<<p.getSecond()<<")"<<endl;

     p.setFirst(2);
    p.setSecond("Two");
    cout << "Updated Pair: (" << p.getFirst() << ", " << p.getSecond() << ")" << endl;

return 0;
}