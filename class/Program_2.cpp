#include <iostream>

class Demo
{
    public:
        Demo()
        {
            std::cout << "Constructor is called.....";
            throw std::runtime_error("error");
        }

        ~Demo()
        {
            std::cout << "Destructor is called.....";
        }
};

int main()
{

    Demo dobj;

    return 0;
}