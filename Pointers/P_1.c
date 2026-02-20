#include <stdio.h>

int main()
{
    int ino_1 = 10;
    int *ptr = &ino_1;

    printf("value of ino_1 : %d\n", ino_1);
    printf("address of ino_1 : %p\n", (void*)&ino_1);

    printf("value of ptr : %p\n", (void*)ptr);
    printf("address of ptr : %p\n", (void*)&ptr);

    return 0;
}
