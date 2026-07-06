#include <iostream>

template <typename T1,typename T2>
T2 Add(T1 Value_1, T2 Value_2)
{
    return Value_1 + Value_2;
}
int main()
{

    int iRet = Add(10, 20);
    float fRet = Add(23.56, 56.58);
    double dRet = Add(89.567, 5689.56);
    double idRet = Add(10, 20.56);

    std::cout << "iRet : " << iRet << std::endl;
    std::cout << "fRet : " << fRet << std::endl;
    std::cout << "dRet : " << dRet << std::endl;
    std::cout << "idRet : " << idRet << std::endl;

    return 0;
}