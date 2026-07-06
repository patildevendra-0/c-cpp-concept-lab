#include <iostream>

template <typename T>
class Demo
{
public:
    void print()
    {
        std::cout << "generic class...\n";
    }
};

template <>
class Demo<bool>
{
public:
    void print()
    {
        std::cout << "special class...\n";
    }
};

int main()
{
    Demo<int> iobj;
    iobj.print();

    Demo<float> fobj;
    fobj.print();

    Demo<bool> bobj;
    bobj.print();

    return 0;
}