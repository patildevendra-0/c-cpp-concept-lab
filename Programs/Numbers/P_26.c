// Pyramid
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

int main()
{
    int rCount = 0;
    int cCount = 0;
    int sCount = 0;

    for (rCount = 1; rCount <= 5; rCount++)
    {
        for (sCount = 1; sCount <= 5 - rCount; sCount++)
        {
            printf("*");
        }

        for (cCount = 1; cCount <= rCount; cCount++)
        {
            printf("%d ",cCount);
        }

        printf("\n");
    }

    return 0;
}