#include <iostream>
#include <functional>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    std::function<int(int, int)> fn;

    fn = add;
    int iRet = fn(10, 20);
    std::cout << "IRET : " << iRet << std::endl;

    fn = multiply;
    iRet = fn(10, 20);
    std::cout << "IRET : " << iRet << std::endl;

    return 0;
}