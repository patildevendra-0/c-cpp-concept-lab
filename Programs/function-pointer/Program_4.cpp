#include <iostream>

int Addition(int a, int b)
{
    return a + b;
}

int main()
{
    int iRet = 0;

    iRet = Addition(11, 21);
    std::cout << "Addition using normal function call iRet : " << iRet << std::endl;

    int (*ptr)(int, int) = Addition;
    iRet = ptr(21, 31);
    std::cout << "Addition using pointer to the function iRet : " << iRet << std::endl;

    return 0;
}