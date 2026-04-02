// Prime Number optimise without math.h custom sqrt
// i * i <= n

// √17 = 4.12
// म्हणजे i <= 4.12
// i * i <= 17 म्हणजे:
// 2*2 = 4  <= 17 ✅ check कर
// 3*3 = 9  <= 17 ✅ check कर
// 4*4 = 16 <= 17 ✅ check कर
// 5*5 = 25 <= 17 ❌ थांब! loop बंद


#include <stdio.h>

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
    for (iCnt = 3; iCnt * iCnt <= ino; iCnt += 2)
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