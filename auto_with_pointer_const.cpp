#include<iostream>

int main()
{
    int ino_1 = 11;
    int *ptr = &ino_1;
    auto x = ptr;               // type = int*

    const int *cPtr = &ino_1;
    auto Y = cPtr;              // type = const int *

    int *const vPtr = &ino_1;
    auto Z = cPtr;              // type = int *

    return 0;
}