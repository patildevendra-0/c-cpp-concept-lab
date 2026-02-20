#include <stdio.h>

int main()
{
   int ino_1 =11;
   float fino_1 = 1323.56f;
   char Data = 'D';

   void *ptr;

   ptr = &ino_1;
   printf("%d\n",*(int*)ptr);

   ptr = &fino_1;
   printf("%f\n",*(float*)ptr);

   ptr = &Data;
   printf("%c\n",*(char*)ptr);

    return 0;
}