#include<stdio.h>

#pragma pack(push,1)
struct Demo
{
    char cData;
    int ino_1;  
};
#pragma pack(pop)

int main()
{   

    struct Demo dobj;
    dobj.cData = 'D';
    dobj.ino_1 = 100;

    printf("%d\n",dobj.ino_1);

    return 0;
}

/// code proper work but on arm or other cpu this crash x86 arcitectre allow to read the missaligned memory aslo due to that this work 
// The code works on x86 because the architecture supports unaligned memory access, but it is still undefined behavior in C and may fail or crash on other architectures like ARM. 