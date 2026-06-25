#include <iostream>

int main()
{
    auto func = []()
    {
        std::cout << "LAMBDA DEMO...\n";
    };

    func();

    return 0;
}