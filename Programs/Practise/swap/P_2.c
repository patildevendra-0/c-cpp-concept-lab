#include<stdio.h>

int main()
{   

    int A,B;
    
    printf("ENTER THE TWO NUMBERS : ");
    scanf("%d %d",&A,&B);

    printf("-------");
    int temp = 0;

    temp = A;
    A = B;
    B = temp;

    printf("A : %d || B : %d \n",A,B);

    return 0;
}