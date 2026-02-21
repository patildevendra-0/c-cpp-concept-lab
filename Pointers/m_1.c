#include<stdio.h>

int main()
{
    printf("FILE : %s\n",__FILE__);
    printf("LINE : %d\n",__LINE__);
    printf("DATE : %s\n",__DATE__);
    printf("TIME : %s\n",__TIME__);
    printf("FUNCTION : %s\n",__FUNCTION__);

    return 0;
}