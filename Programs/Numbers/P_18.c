// Perefct number
// Perfect number म्हणजे असा number ज्याचे proper divisors (स्वतःला सोडून) यांची बेरीज त्या number इतकीच होते.

// Example: 6 → (1 + 2 + 3 = 6) ✔️

#include <stdio.h>

int main()
{
    int iUser_Input = 0;
    printf("Enter the number : ");
    scanf("%d", &iUser_Input);

    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iUser_Input / 2; iCnt++)
    {
        if (iUser_Input % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if (iSum == iUser_Input)
    {
        printf("PERFECT NUMBER...\n");
    }
    else
    {
        printf("NOT PERFECT NUMBER...\n");
    }

    return 0;
}