#include <stdio.h>

int main()
{
    int ino_1 = 21;

    int *ptr_1 = &ino_1;
    int **ptr_2 = &ptr_1;
    int ***ptr = &ptr_2;

    return 0;
}
