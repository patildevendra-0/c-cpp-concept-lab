#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    if (fs::exists("logs"))
    {
        std::cout << "Directory exists...\n";
    }
    else
    {
        std::cout << "Directory not exists.....\n";
    }

    return 0;
}