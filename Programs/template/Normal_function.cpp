#include <iostream>

int Add(int a, int b)
{
    return a + b;
}

float Add(float a, float b)
{
    return a + b;
}

double Add(double a, double b)
{
    return a + b;
}

int main()
{

    int iRet = Add(10, 11);
    float fRet = Add(10.25, 89.56);
    double dRet = Add(5689.23589, 5656.697);

    std::cout << "iRet : " << iRet << std::endl;
    std::cout << "fRet : " << fRet << std::endl;
    std::cout << "dRet : " << dRet << std::endl;

    return 0;
}