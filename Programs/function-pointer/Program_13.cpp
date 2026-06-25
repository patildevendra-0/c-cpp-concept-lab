#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    auto func = [](int a, int b)
    {
        return a + b;
    };

    int iRet = func(10, 20);
    std::cout << "IRET : " << iRet << std::endl;

    return 0;
}