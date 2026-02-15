#include<stdio.h>

int main(int argc,char *argv[])
{
    printf("Argument Count : %d\n",argc);

    int iCnt = 0;
    for(iCnt = 0 ; iCnt<argc ;iCnt++)
    {
        printf("Argument [%d : %s] \n",iCnt,argv[iCnt]);
    }

    return 0;
}



// argc = argument count
// argv[] =  argument vector
// ./myexe SHREE GANESH 

//--------------------------------------------//
// Argument Count: 3
// Argument 0: ./myexe
// Argument 1: SHREE
// Argument 2: GANESH
//--------------------------------------------//