#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("demo.txt");

    if (!file.is_open())
    {
        std::cout << "failed to open file..." << std::endl;
        return 1;
    }

    file << "hello";

    file.close();

    return 0;
}