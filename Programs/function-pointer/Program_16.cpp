#include <iostream>

int main()
{
    int iNo = 11;

    auto func = [&iNo]()
    {
        std::cout << "INO : " << iNo << std::endl;
    };


    iNo++;
    func();

    return 0;
}