#include<stdio.h>

struct Demo_1
{
    int ino_1;
    char cData;
};


#pragma pack(1)
struct Demo_2
{
    int ino_1;
    char cData;
};


#pragma pack(push,1)
struct Demo_3
{
    int ino_1;
    char cData;
};
#pragma pack(pop)



struct __attribute__((packed)) Demo_4
{
    int ino_1;
    char cData;
};

struct Demo_5
{
    int ino_1;
    char cData;
}__attribute__((packed));


int main()
{



    return 0;
}