#include<stdio.h>
#include<string.h>

struct Demo
{
    char cData;
    int iNo_1;
}__attribute__((packed));

static inline int get_unalligned_int(void * ptr)
{
    int iRet = 0;
    memcpy(&iRet,ptr,sizeof(iRet));
    return iRet;
}

int main()
{
    struct Demo dobj = {'D',11};
    printf("SIZE OF DEMO : %ld\n",sizeof(dobj));
    
    int iRet = get_unalligned_int(&dobj.iNo_1);
    printf("ID : %d\n",iRet);

    return 0;
}