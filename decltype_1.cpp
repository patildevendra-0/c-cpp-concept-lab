#include<iostream>

int main()
{
    int x = 11;
    int &ref = x;

    int ino = 101;
    int *ptr = &ino;

    decltype(x) y = 21;                             // x = y type

    decltype(ptr) z = &ino;                         // z = int*

    decltype((x)) m = x;                            // m is ref of x () = &int

    decltype(ref) xRef = x;                         // xRef is ref of x

    decltype(x + ino ) n = 111;                     // int + int  =  int soo n = int 
    
    
    return 0;
}