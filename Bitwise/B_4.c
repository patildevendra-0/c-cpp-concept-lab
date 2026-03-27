#include<stdio.h>

int main()
{
    int iNo = 40;
    int iCnt = __builtin_ffs(iNo);

    printf("1 based index : %d\n",iCnt);

    return 0;
}