#include <iostream>

void Demo()
{
}

void Test()
{
}

int main()
{

    std::cout << "Address : " << reinterpret_cast<void*>(Demo) << std::endl;
    std::cout << "Address : " << Test << std::endl;

    return 0;
}