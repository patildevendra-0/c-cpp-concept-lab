#include <iostream>

template <typename T>
T Add(T Value_1, T Value_2)
{
    return Value_1 + Value_2;
}
int main()
{

    int iRet = Add(10, 20);
    float fRet = Add(23.56, 56.58);
    double dRet = Add(89.567, 5689.56);

    std::cout << "iRet : " << iRet << std::endl;
    std::cout << "fRet : " << fRet << std::endl;
    std::cout << "dRet : " << dRet << std::endl;

    return 0;
}