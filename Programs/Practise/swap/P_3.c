#include<stdio.h>

int main()
{
    int a,b;
    printf("ENTER THE TWO NUMBERS : ");
    scanf("%d %d",&a,&b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("A : %d || B : %d \n",a,b);


    return 0;
}