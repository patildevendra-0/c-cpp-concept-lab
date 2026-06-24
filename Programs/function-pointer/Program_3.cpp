#include <iostream>

void Demo()
{
    std::cout << "Inside the Demo function..." << std::endl;
}

int main()
{
    Demo();

    void (*ptr)() = Demo;

    ptr();

    return 0;
}