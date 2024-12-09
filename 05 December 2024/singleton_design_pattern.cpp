class singleton
{
    singleton()//by default in class this constructor is private
    {

    }

    static singleton* ptr;

    public:
    static singleton* getSingletonInstance()
    {
        if(ptr==nullptr)//double locking approach ,before c++ 11 this is using
        {
            if(ptr==nullptr)
            {
                singleton* ptr=new singleton();
            }
        }
        return ptr;
    }
};

singleton* singleton:: ptr=NULL;

int main()
{
    singleton* inst=singleton::getSingletonInstance();
    singleton* inst2=singleton::getSingletonInstance();

    singleton* inst3;
    inst3=inst2;

}