#include <iostream>

template <typename T>
class Demo
{
    private:
        T Data;

    public:
        void set(T Value)
        {
            Data = Value;
        }

        T get()
        {
            return Data;
        }
};

int main()
{
    Demo<int> iobj;
    iobj.set(21);

    int iRet = iobj.get();
    std::cout << "iRet : " << iRet << std::endl;

    Demo<double> dobj;
    dobj.set(2356.59562);

    int dRet = dobj.get();
    std::cout << "dRet : " << dRet << std::endl;

    Demo<char> cobj;
    cobj.set('M');

    char cRet = cobj.get();
    std::cout << "cRet : " << cRet << std::endl;

    return 0;
}