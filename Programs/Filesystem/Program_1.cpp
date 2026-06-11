#include <iostream>
#include <fstream>

int main()
{
    std::fstream file("demo.txt");

    if (!file.is_open())
    {
        std::cout << "Failed to open the file..." << std::endl;
        return 1;
    }

    std::string Line;

    while (std::getline(file, Line))
    {
        std::cout << Line << std::endl;
    }

    file.close();

    return 0;
}