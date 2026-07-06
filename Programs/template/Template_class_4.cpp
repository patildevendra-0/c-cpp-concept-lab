#include <iostream>

template <typename T, int iSIZE>
class ArrayX
{
    T Data[iSIZE];
};

int main()
{
    ArrayX<int, 10> iobj;

    ArrayX<float, 20> fobj;

    ArrayX<double, 30> dobj;

    return 0;
}