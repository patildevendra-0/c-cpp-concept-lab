#include<iostream>
using namespace std;

typedef int(*FuncPtr)(int,int);

int Addition(int ino_1,int ino_2)
{
    return ino_1 + ino_2;
}

int main()
{
    FuncPtr fPtr;
    fPtr = Addition;

    int iRet = fPtr(11,21);
    cout <<"Addition is :"<<iRet<<endl;

    return 0;
}