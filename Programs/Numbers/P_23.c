// Pattern Printing
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5

#include <stdio.h>

int main()
{
    int iRCnt = 0; //  ROW
    int iCCnt = 0; // COLUMN
    int iNo = 0;

    printf("ENTER THE NUMER : ");
    scanf("%d",&iNo);

    for (iRCnt = 1; iRCnt <= iNo; iRCnt++)
    {
        for (iCCnt = 1; iCCnt <= iRCnt; iCCnt++)
        {
            printf("%d\t",iCCnt);
        }
        printf("\n");
    }

    return 0;
}