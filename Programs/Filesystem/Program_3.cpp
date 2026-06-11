#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("demo.txt", std::ios::app);

    if (!file.is_open())
    {
        std::cout << "failed to open the file...." << std::endl;
        return 1;
    }

    file << "demo text append...";

    file.close();

    return 0;
}