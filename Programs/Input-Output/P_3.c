// scanf
// scanf keyboard (stdin) वरून वाचतो

#include <stdio.h>

int main()
{
    int iNo = 0;
    float fNo = 0;
    double dNo = 0;
    char C = 0;

    printf("ENTER THE INTEGER : ");
    scanf("%d", &iNo);

    printf("ENTER THE FLOAT : ");
    scanf("%f", &fNo);

    printf("ENTER THE DOUBLE : ");
    scanf("%lf", &dNo);

    printf("ENTER THE CHAR : ");
    scanf(" %[^\n]", &C);

    printf("\n");

    printf("INT : %d\n", iNo);
    printf("FLOAT : %f\n", fNo);
    printf("DOUBLE : %f\n", dNo);
    printf("CHAR : %c\n", C);

    return 0;
}