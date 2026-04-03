// GCD (Greatest Common Divisor)

// दोन्ही numbers ला exact divide करणारे numbers कोणते
// GCD म्हणजे — दोन्ही numbers ला perfect divide करणारा सर्वात मोठा number

#include <stdio.h>

int GCD(int a, int b)
{
    int iReminder = 0;
    while (b != 0)
    {
        iReminder = a % b;
        a = b;
        b = iReminder;
        printf("%d \n", iReminder);
    }
    return a;
}

int main()
{
    int iUserInput_1 = 0;
    int iUserInput_2 = 0;
    int iRet = 0;

    printf("Enter the numbers : ");
    scanf("%d %d", &iUserInput_1, &iUserInput_2);

    iRet = GCD(iUserInput_1,iUserInput_2);
    printf("GCD : %d\n", iRet);

    return 0;
}

// 1 2 3 4 6 12                12 kuthe kuthe yeto table madhe
// 1 2 4 8                     8  kuthe kuthe yeto table madhe
// common 1 2 4 now GCD is 4

