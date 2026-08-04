#include<iostream>

class Demo
{
    private:
        Demo() = default;

        Demo(const Demo&) = delete;
        Demo& operator = (const Demo&);

        Demo(Demo&&) = delete;
        Demo& operator = (Demo&&) = delete;

    public:
        static Demo& getInstance()
        {
            static Demo dobj;
            return dobj;
        }    
};

int main()
{



    return 0;
}