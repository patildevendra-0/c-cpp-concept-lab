#include <iostream>

class iDemo
{
private:
    int Data;

public:
    void set(int iValue)
    {
        Data = iValue;
    }

    int get()
    {
        return Data;
    }
};

class fDemo
{
private:
    float Data;

public:
    void set(float iValue)
    {
        Data = iValue;
    }

    float get()
    {
        return Data;
    }
};

int main()
{
    iDemo idobj;
    idobj.set(11);

    fDemo fdobj;
    fdobj.set(1.256);

    int iRet = idobj.get();
    std::cout << "iRet : " << iRet << std::endl;

    float fRet = fdobj.get();
    std::cout << "fRet : " << fRet << std::endl;

    return 0;
}