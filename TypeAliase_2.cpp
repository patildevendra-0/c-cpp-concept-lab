#include<iostream>


int main()
{
    int iNo_1 = 21; 
    int iNo_2 = 31;

    int *ptr = &iNo_1;          // ptr is pointing to the &iNo_1

   
    int const *cPtr = &iNo_1;
    //*cPtr = 31;                               // we can't do this
    cPtr = &iNo_2;                              // allowed


    int *const dPtr = &iNo_2;
    *dPtr = 31;                                  // allowed
    //dPtr = &iNo_1;                             // Not allowed


    return 0;
}