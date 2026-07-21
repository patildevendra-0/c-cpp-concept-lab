#include<iostream>

class Demo
{
    private:
        Demo()
        {

        }
    
    public:
        static Demo& GetInstance()
        {
            static Demo dobj;
            return dobj;
        }
};

int main()
{
    Demo& dobj = Demo::GetInstance();
    Demo& dobj_2 = dobj;                     // here copy constructor is called sooo again singleton break here


    return 0;
}