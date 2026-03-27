#include<stdio.h>

int main()
{
    int iNo = 10;
    int iCnt = __builtin_popcount(iNo);

    printf("count : %d\n",iCnt);

    return 0;
}