#include <iostream>

template <typename T1,typename T2>
class Demo
{
    public:
        void print()
        {
            std::cout << "generic class...\n";
        }
};

template <typename T2>
class Demo<int,T2>
{
public:
    void print()
    {
        std::cout << "special class...\n";
    }
};

int main()
{
    Demo<int,int> iobj;
    iobj.print();

    Demo<float,float> fobj;
    fobj.print();

    Demo<int,float> bobj;
    bobj.print();

    return 0;
}