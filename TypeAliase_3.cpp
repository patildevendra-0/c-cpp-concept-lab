#include<iostream>

typedef int* Iptr;

int main()
{
    int iNo_1 = 21;
    int iNo_2 = 41;


    const Iptr P = &iNo_1;        // const is applied on type (int *) soo due to this we can change the value but not address
    *P = iNo_2;                 // allowed
    // P = &iNo2                // not allowed


    return 0;
}