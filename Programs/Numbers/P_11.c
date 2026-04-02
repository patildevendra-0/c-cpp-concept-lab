// Prime Number

// कोणीच divide केलं नाही → PRIME ✅
// Prime numbers हे नेहमी **positive integers** असतात 
// 2 हा एकमेव even prime number आहे Even numbers कधीच prime नसतात — म्हणून 2 check केल्यावर फक्त odd numbers check करायचे

#include <stdio.h>

int Check_Prime(int ino)
{
    int iPrime = 1;
    int iCnt = 0;
    for (iCnt = 2; iCnt < ino; iCnt++)
    {
        if (ino % iCnt == 0)
        {
            iPrime = 0;
            break;
        }
    }

    return iPrime;
}

int main()
{
    int iUser_Input = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iUser_Input);

    iRet = Check_Prime(iUser_Input);
    if(iRet == 0)
    {
        printf("%d is not prime number...\n",iUser_Input);
    }
    else
    {
        printf("%d is prime number..\n",iUser_Input);
    }

    return 0;
}