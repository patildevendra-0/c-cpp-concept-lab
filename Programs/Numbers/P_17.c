// LCM (Least Common Multiple)

// LCM म्हणजे — दोघांनी divide होणारा smallest number

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

int LCM(int a, int b, int gcd)
{
    int iRet = (a / gcd) * b;
    return iRet;
}

int main()
{
    int iUserInput_1 = 0;
    int iUserInput_2 = 0;
    int iRet_gcd = 0;
    int iRet_lcm = 0;

    printf("Enter the numbers : ");
    scanf("%d %d", &iUserInput_1, &iUserInput_2);

    iRet_gcd = GCD(iUserInput_1, iUserInput_2);
    iRet_lcm = LCM(iUserInput_1,iUserInput_2,iRet_gcd);

    printf("GCD : %d\n", iRet_gcd);
    printf("LCM : %d\n", iRet_lcm);

    return 0;
}




// 12 24 36 48
// 8 16 24 32 
// ikde common aahe 24 soo LCM 