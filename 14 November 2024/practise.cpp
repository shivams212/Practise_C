#include<iostream>
using namespace std;
template<typename T>

class Box
{
    private:
    T value;
    public:
    void setValue(T val)
    {
        value=val;
    }
    T getValue() const{
        return value;
    }
};

int main()
{
    Box<int> intBox;
    intBox.setValue(42);
    cout<<"Integer Box :"<< intBox.getValue()<<endl;
    
    Box<string> stringBox;
    stringBox.setValue("Hello Templates");
    cout<<"String Box: "<<stringBox.getValue()<<endl;

    return 0;
}