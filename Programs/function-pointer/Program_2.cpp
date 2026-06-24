#include <iostream>

int main()
{

    int ino = 10;
    int *ptr = &ino;

    std::cout << "POINTER TO INO : " << *ptr << std::endl;

    return 0;
}