#include<iostream>
using namespace std;

int Addition(int a,int b)
pre(a>=0)
pre(b>=0)
post(result!=0)
{
    return a+b;
}

int main()
{
    int iRet = Addition(10,20);
    cout<<"ADD : "<< iRet <<"\n";
    return 0;
}