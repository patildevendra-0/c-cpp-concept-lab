// Product,Sum,Count

#include <stdio.h>

int main()
{
    printf("SHREE GANESH...");

    int iCount = 0;
    int iSum = 0;
    int iProduct = 1;
    int iNo = 0;
    int iDigit = 0;

    printf("ENTER THE NUMBER  : ");
    scanf("%d", &iNo);

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iProduct = iProduct * iDigit;
        iCount++;
        iNo = iNo / 10;
    }

    printf("PRODUCT : %d\n", iProduct);
    printf("SUM : %d\n", iSum);
    printf("COUNT : %d\n", iCount);

    return 0;
}