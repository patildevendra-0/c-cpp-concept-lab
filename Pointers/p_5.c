#include<stdio.h>

struct student
{
    int Roll_No;
    char Name;
};

int main()
{

    struct student dobj;
    struct student *ptr = &dobj;

    ptr->Name = 'D';
    ptr->Roll_No = 1;

    
    return 0;
}