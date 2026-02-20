#include<iostream>
using namespace std;

void Addition(int iNo_1,int iNo_2)
{
    int iRet = iNo_1 + iNo_2;
    cout<<"Addition is : "<<iRet<<endl;
}

int main()
{
    void (*fPtr)(int,int);
    fPtr = Addition;
    fPtr(11,21);

    return 0;
}