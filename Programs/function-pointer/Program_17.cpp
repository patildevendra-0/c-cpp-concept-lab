#include <iostream>
#include <functional>

void Demo()
{
    std::cout << "SHREE GANESH....\n";
}

int main()
{
    std::function<void()> f = Demo;
    f();

    return 0;
}