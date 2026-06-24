#include <iostream>

void Demo()
{
    std::cout << "INSIDE DEMO FUNCTION..." << std::endl;
}

void Execute(void(*ptr)())
{
    ptr();
}

int main()
{
    Execute(Demo);
}