#include<stdio.h>
 
#define SQRT(x) x*x                                // 2+2 * 2+2      --- multiply first then add = 8 (WRONG)

#define SQRT_(y) (y)*(y)

int main()
{

    int iRet = SQRT(2+2);                            // actual answer is 16 we want but we get 8 
    printf("iRet : %d\n",iRet);


    iRet = SQRT_(2+2);
    printf("iRet : %d\n",iRet);                     // 16 proper output 

    return 0;
}