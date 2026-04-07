// Pattern
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1

#include <stdio.h>

int main()
{
    int iRcnt = 0;
    int iCcnt = 0;
    int iNo_1 = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &iNo_1);

    for (iRcnt = iNo_1; iRcnt >= 1; iRcnt--)
    {
        for (iCcnt = 1; iCcnt <= iRcnt; iCcnt++)
        {
            printf("%d\t", iCcnt);
        }
        printf("\n");
    }

    return 0;
}