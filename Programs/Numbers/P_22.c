// smallest digit in number

#include <stdio.h>

int main()
{
    int iNo_1 = 0;
    int smallest = 9;
    int iDigit = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &iNo_1);

    while (iNo_1 != 0)
    {
        iDigit = iNo_1 % 10;
        if (iDigit < smallest)
        {
            smallest = iDigit;
        }
        iNo_1 = iNo_1 /10;
    }

    printf("SMALLEST DIGIT : %d\n",smallest);

    return 0;
}