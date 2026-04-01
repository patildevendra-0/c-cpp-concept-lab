// power of Number
// ex 5*5*5 = 125 (5^3)

#include<stdio.h>

int Power(int iNo,int iPow)
{
    int temp = iPow;
    int iAns = 1;

    while (temp != 0)
    {
        iAns = iAns * iNo;
        temp --;
    }
    return iAns;
}

int main()
{

    int iRet = Power(5,3);
    printf("%d\n",iRet);

    return 0;
}