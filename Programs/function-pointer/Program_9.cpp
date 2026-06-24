#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int Division(int a, int b)
{
    return a / b;
}

void Execute(int (*ptr)(int, int), int a, int b)
{
    int iRet = ptr(a, b);
    std::cout << "iRet : " << iRet << std::endl;
}

int main()
{

    Execute(add,11,21);
    Execute(multiply,11,21);
    Execute(subtraction,11,21);
    Execute(Division,11,21);
    return 0;
}