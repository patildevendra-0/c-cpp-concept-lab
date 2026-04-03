// Fibonacci Numbers
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
// आधीचे दोन numbers add केले की पुढचा येतो

#include <stdio.h>

int main()
{
    int iUserInput = 0;

    printf("Enter the number : ");
    scanf("%d", &iUserInput);

    int iCnt = 0;
    int First = 0;   // पहिला  → 0
    int Secound = 1; // दुसरा → 1
    int iNext = 0;

    for (iCnt = 1; iCnt <= iUserInput; iCnt++)
    {
        printf("%d ", First); // print कर

        iNext = First + Secound; // नवीन calculate कर
        First = Secound;         // shift कर
        Secound = iNext;         // shift कर
    }

    printf("\n");
    return 0;
}

// a = 0, b = 1, c = 0
// c = a + b
// a = b;
// b = c;