#include <iostream>

class Demo
{
    public: 
        Demo()
        {
            std::cout << "CONSTRUCTOR CALLED....\n";
        }

        ~Demo()
        {
            std::cout << "DESTRUCTOR CALLED.....\n";
        }

        void printFunction()
        {
            std::cout << "SHREE GANESH...\n";
        }
};

int main()
{
    Demo dobj;

    dobj.printFunction();

    return 0;
}