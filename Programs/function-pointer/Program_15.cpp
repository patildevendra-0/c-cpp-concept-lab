#include <iostream>

int main()
{

    int ino = 10;
    int ino2 = 11;

    auto func = [ino,ino2]()
    {
        std::cout << "iNo : " << ino << std::endl;
        std::cout << "iNo2 : " << ino2 << std::endl;

    };

    func();

    return 0;
}