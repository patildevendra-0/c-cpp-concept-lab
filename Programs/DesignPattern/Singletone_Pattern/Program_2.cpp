#include<iostream>

class Demo
{
    private:
        Demo() = default;
        Demo(const Demo&) = delete;
        Demo& operator = (const Demo&) = delete;
        Demo(Demo&&) = delete;
        Demo& operator = (Demo&&) = delete;
    
    public:

        static Demo& getInstnace()
        {
            std::cout<<"OBJECT CREATED...\n";
            static Demo dobj;
            return dobj;
        }

        void Test()
        {
            std::cout<<"Obj test function..\n";
        }
};

int main()
{
    Demo& dobj = Demo::getInstnace();
    dobj.Test();


    return 0;
}   