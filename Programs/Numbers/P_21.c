// largest Digit in number

#include <stdio.h>

int main()
{
    int iNo_1 = 0;
    int largest = 0;
    int iDigit = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo_1);

    while (iNo_1 != 0)
    {
        iDigit = iNo_1 % 10;
        if (iDigit > largest)
        {
            largest = iDigit;
        }
        iNo_1 = iNo_1 / 10;
    }

    printf("LARGEST DIGIT : %d\n", largest);

    return 0;
}