#include<stdio.h>

void SwapNumbers(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main()
{
    int a,b;
    printf("ENTER THE NUMBERS : ");
    scanf("%d %d",&a,&b);

    SwapNumbers(&a,&b);
    printf("A : %d || B : %d \n",a,b);


    return 0;
}