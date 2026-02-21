#include<assert.h>

int main()
{

    int ino = 10;
    static_assert(sizeof(ino) == 4);


    return 0;
}