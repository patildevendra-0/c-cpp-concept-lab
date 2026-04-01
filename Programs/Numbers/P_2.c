// Number is Even or Odd
// Even - 2 4 8
// Odd - 1 3 5
// using Bitwise -- here just check last bit (If last bit is on soo number is odd)

#include <stdio.h>

int main()
{
    int iNo = 0;
    printf("Enter the number : ");
    scanf("%d", &iNo);

    if (iNo & 1)
    {
        printf("%d is Odd..\n", iNo);
    }
    else
    {
        printf("%d is Even..\n", iNo);
    }

    return 0;
}