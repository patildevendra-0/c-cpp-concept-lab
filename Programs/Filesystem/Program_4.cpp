#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{

    if (fs::exists("demo.txt"))
    {
        std::cout << "file exists....\n";
    }
    else
    {
        std::cout << "file not exists...\n";
    }

    return 0;
}