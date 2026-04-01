// Number is Even or Odd 
// Even - 2 4 8
// Odd - 1 3 5


#include<stdio.h>


int main()
{
    int iNo = 0;
    printf("Enter the number : ");
    scanf("%d",&iNo);

    if(iNo%2 == 0)
    {
        printf("%d is Even..\n",iNo);
    }
    else
    {
        printf("%d is Odd..\n",iNo);
    }

    return 0;
}