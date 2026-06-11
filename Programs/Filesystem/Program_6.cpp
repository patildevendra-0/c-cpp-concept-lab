#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    fs::create_directory("logs");        // create directory
    fs::create_directories("test/demo"); // create nested directory
    fs::remove("demo.txt");              // demo.txt file is removed
    fs::remove("logs");                  // removed the directory
    fs::remove_all("test/demo");         // remove all recusrsively in that directory
    fs::rename("test/demo.txt", "test/test.txt");  // rename file
    return 0;
}