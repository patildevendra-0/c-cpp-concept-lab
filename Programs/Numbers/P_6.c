// Palindrome Number (number उलटा केला तरी तोच असेल)
// half reverse trick (LOPP OPTIMISATION)

#include <stdio.h>

int main()
{
    int iUser_Input = 0;
    int iOriginal_Number = 0;
    int iDigit = 0;
    int iReverse = 0;

    printf("Enter the number : ");
    scanf("%d", &iUser_Input);

    iOriginal_Number = iUser_Input;            // just for print purpose copy here 


    while (iUser_Input > iReverse)
    {
        iDigit = iUser_Input % 10;
        iReverse = iReverse * 10 + iDigit;
        iUser_Input = iUser_Input / 10;
    }

    if(iUser_Input ==  iReverse || iUser_Input == iReverse / 10) 
    {
        printf("%d is pallindrome number ..\n",iOriginal_Number);
    }
    else
    {
        printf("%d is not pallindrome number ..\n",iOriginal_Number);
    }

    return 0;
}


// 1221  → 4 digits (even) → n == reversed          check कर
// 12321 → 5 digits (odd)  → n == reversed/10       check कर (middle digit 3 ignore)  mhnje last kadun check karayche