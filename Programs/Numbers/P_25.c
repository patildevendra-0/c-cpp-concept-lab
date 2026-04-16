//  Floyd's Triangle

//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15

#include <stdio.h>

int main()
{
    // printf("SHREE GANESH...\n");

    int rCnt = 0;
    int cCnt = 0;
    int iCount = 1;

    for (rCnt = 1; rCnt <= 5; rCnt++)
    {
        for (cCnt = 1; cCnt <= rCnt; cCnt++)
        {
            printf("%d\t",iCount);
            iCount ++;
        }
        printf("\n");
    }

    return 0;
}