// Armstrong Number

// ज्या number च्या प्रत्येक digit ला, त्या number मधील एकूण digits च्या count ने
// power दिली आणि सगळे add केले तर तोच number परत येतो — तो Armstrong Number

// 0 ते 9 सगळे single digit numbers Armstrong असतात

// Compile करताना `-lm` flag लाव — `gcc program.c -lm` beacuse we use math.h (external library ) 
// तू math department मध्ये जाणार आहेस हे आधी सांगावं लागेल — नाहीतर door बंद राहील!
//-lm म्हणजे तेच सांगणं — "मला math library हवी आहे!"
// -l  → "link कर"
// m   → "math library"

#include <stdio.h>
#include <math.h>

int main()
{
    int iUser_input = 0;
    int iOriginal_Number, temp = 0;
    int iDigit_Count = 0;
    int iDigit = 0;
    int iSum = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iUser_input);

    iOriginal_Number = iUser_input;
    temp = iUser_input;

    while (iUser_input != 0)
    {
        iUser_input = iUser_input / 10;
        iDigit_Count++;
    }

    printf("iDigit_Count : %d\n", iDigit_Count);

    while (temp != 0)
    {
        iDigit = temp % 10;
        iRet = pow(iDigit, iDigit_Count);
        printf("iRet : %d\n", iRet);
        iSum = iSum + iRet;
        printf("iSum : %d\n", iSum);

        temp = temp / 10;
    }

    if (iSum == iOriginal_Number)
    {
        printf("%d is the Armstrong number \n", iOriginal_Number);
    }
    else
    {
        printf("%d is not Armstrong number \n", iOriginal_Number);
    }

    return 0;
}