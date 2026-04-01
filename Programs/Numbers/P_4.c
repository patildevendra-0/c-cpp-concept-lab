// Reverse a Number

#include <stdio.h>

int main()
{
    int iNo_1 = 0;
    int iDigit = 0;
    int iReverse = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo_1);

    while (iNo_1 != 0)
    {
        iDigit = iNo_1 % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo_1 = iNo_1 / 10;
    }

    printf("Reverse number  : %d\n", iReverse);

    return 0;
}