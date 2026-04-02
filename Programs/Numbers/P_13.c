// Prime Number optimise without math.h custom sqrt
// Newton-Raphson method — हा real world मध्ये वापरतात!

// Real life analogy — **अंधारात खजिना शोधणे!** 🗺️
// n = 25 चं sqrt शोधायचं आहे

// Step 1 → initial guess = 25/2 = 12.5  (random अंदाज)
//
// Step 2 → better = (12.5 + 25/12.5) / 2
//                 = (12.5 + 2.0) / 2
//                 = 7.25
// Step 3 → better = (7.25 + 25/7.25) / 2
//                 = (7.25 + 3.44) / 2
//                 = 5.34
// Step 4 → better = (5.34 + 25/5.34) / 2
//                 = (5.34 + 4.68) / 2
//                 = 5.01
// Step 5 → better = (5.01 + 25/5.01) / 2
//                 = 5.0000 ✅ → stop!

#include <stdio.h>

float Square_Root(int ino)
{
    if (ino == 0 || ino == 1)
    {
        return ino;
    }
    float guess = ino / 2.0;

    while (1)
    {
        float better = (guess + ino / guess) / 2.0;

        if (guess - better < 0.0001 && guess - better > -0.0001)
        {
            break;
        }

        guess = better;
    }
}

int Chekc_Prime(int ino)
{
    int Prime = 1;

    if (ino <= 1)
    {
        return 0;
    }

    if (ino == 2)
    {
        return 1;
    }

    if (ino % 2 == 0)
    {
        return 0;
    }

    int iCnt = 0;
    for (iCnt = 3; iCnt <= Square_Root(ino); iCnt += 2) 
    {
        if (ino % iCnt == 0)
        {
            Prime = 0;
            break;
        }
    }

    return Prime;
}

int main()
{
    int iUser_Input = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iUser_Input);

    iRet = Chekc_Prime(iUser_Input);
    if (iRet == 1)
    {
        printf("%d is prime number ...\n", iUser_Input);
    }
    else
    {
        printf("%d is not prime number..\n", iUser_Input);
    }

    return 0;
}