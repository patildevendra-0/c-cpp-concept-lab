//    1
//   1 2
//  1 2 3
// 1 2 3 4
//  1 2 3
//   1 2
//    1

// Diamond

#include <stdio.h>

int main()
{
    int R, C, S;

    for (R = 1; R <= 5; R++)
    {
        for (S = 1; S <= 5 - R; S++)
        {
            printf(" ");
        }

        for (C = 1; C <= R; C++)
        {
            printf("%d ", C);
        }

        printf("\n");
    }

    for (R = 5 - 1; R >= 1; R--)
    {
        for (S = 1; S <= 5 - R; S++)
        {
            printf(" ");
        }

        for(C=R;C>=1;C--)
        {
            printf("%d ",C);
        }

        printf("\n");
    }

    return 0;
}