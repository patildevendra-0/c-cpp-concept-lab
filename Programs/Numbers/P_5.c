// Palindrome Number (number उलटा केला तरी तोच असेल)
// Original save कर, reverse कर, compare कर

#include <stdio.h>

int main()
{
    int iUser_Input = 0;
    int iOriginal_Number = 0;
    int iDigit = 0;
    int iReverse = 0;

    printf("Enter the number : ");
    scanf("%d", &iUser_Input);
    
    iOriginal_Number = iUser_Input;

    while (iUser_Input != 0)
    {
        iDigit = iUser_Input % 10;
        iReverse = iReverse * 10 + iDigit;
        iUser_Input = iUser_Input / 10;
    }

    if (iOriginal_Number == iReverse)
    {
        printf("%d is pallindrome number ...\n", iOriginal_Number);
    }
    else
    {
        printf("%d is not pallindrome number..\n", iOriginal_Number);
    }

    return 0;
}