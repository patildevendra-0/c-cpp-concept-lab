#include<stdio.h>

#define DOUBLE(x) (x)*(x)

int main()
{
    int ino = DOUBLE(10);
    printf("ino : %d\n",ino);

    return 0;
}