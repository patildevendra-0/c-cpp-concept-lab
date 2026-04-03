// Strong Number
// Step 1 — प्रत्येक digit काढ (% 10, / 10 — master key!)
// Step 2 — त्या digit चं factorial calculate कर                   (1 पासून त्या number पर्यंत सगळे multiply कर)
// Step 3 — सगळे add कर → original शी compare कर

// 145 → 1! + 4! + 5!
// = 1 + 24 + 120
// = 145 ← तोच

#include<stdio.h>

int Factorial(int ino)
{
    int iCnt = 0;
    int iFact = 1;
    for (iCnt = 1; iCnt <= ino; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{   
    int iUserInput = 0;
    int iRet = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iSum = 0;

    printf("Enter the number : ");
    scanf("%d",&iUserInput);

    iTemp = iUserInput;

    while (iTemp!=0)
    {
        iDigit = iTemp % 10;
        iRet = Factorial(iDigit);
        iSum = iSum + iRet;
        iTemp = iTemp / 10;
    }

    if(iSum == iUserInput)
    {
        printf("%d is Strong Number ... \n",iUserInput);
    }
    else
    {
        printf("%d is not Strong number ..\n",iUserInput);
    }
    
    return 0;
}