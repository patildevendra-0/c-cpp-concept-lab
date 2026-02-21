#include <stdio.h>

#define INC(x) \
    do         \
    {          \
        x++;   \
        y++;   \
    } while (0)

    // here we do multistatement ----> to single statement

int main()
{
    int x = 0;
    int y = 0;

    if (x > 10)
        INC(x);

    printf("x : %d\n", x);
    printf("y : %d\n", y);

    return 0;
}