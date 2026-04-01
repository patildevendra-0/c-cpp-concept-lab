#include<stdio.h>

int main()
{
    unsigned int X = 0;

    X = X | (1<<2);
    printf("X : %d\n",X);

    return 0;
}