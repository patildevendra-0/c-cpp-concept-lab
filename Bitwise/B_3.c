#include<stdio.h>

int main()
{
    int iNo = 40;
    int iCnt = __builtin_ctz(iNo);

    printf("zero count : %d\n",iCnt);

    return 0;
}