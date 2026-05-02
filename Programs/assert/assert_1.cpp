#include <cassert>
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    assert(a >= 0 && b >= 0);
    int iRet = a + b;
    return iRet;
}

int main()
{
    int iAns = addition(-10, 20);                // abort here due to -10
    cout << "ADD  : " << iAns << "\n";
    return 0;
}