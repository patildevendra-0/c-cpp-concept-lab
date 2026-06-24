#include <iostream>

#define OPERATION 2

int Add(int a, int b)
{
    return a + b;
}

int Multiply(int a, int b)
{
    return a * b;
}

int main()
{

    int (*ptr)(int, int);
    int iRet = 0;

    if (OPERATION == 1)
    {
        ptr = Add;
    }
    else
    {
        ptr = Multiply;
    }

    iRet = ptr(11, 21);
    std::cout << "iRet : " << iRet << std::endl;
    return 0;
}