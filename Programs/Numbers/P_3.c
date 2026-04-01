// Sum of Digits

#include <stdio.h>

int main()
{
    int iNo_1 = 0;
    int iDigit = 0;
    int iSum = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &iNo_1);

    while (iNo_1 != 0)
    {
        iDigit = iNo_1 % 10;
        iSum = iSum + iDigit;
        iNo_1 = iNo_1 / 10;
    }

    printf("SUM : %d\n",iSum);

    return 0;
}