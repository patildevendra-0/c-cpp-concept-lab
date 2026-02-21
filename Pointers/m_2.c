#include <stdio.h>

#define INC(x) \
    x++;       \
    y++;

int main()
{
    int x = 0;
    int y = 0;

    if (x > 10)
        INC(x)                       // here y++ always beuase if bind next only

    printf("x : %d\n",x);
    printf("y : %d\n",y);

    return 0;
}