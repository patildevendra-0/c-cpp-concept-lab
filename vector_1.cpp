#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> iVec;
    iVec.push_back(11);
    iVec.push_back(21);
    iVec.push_back(31);
    iVec.push_back(41);


    cout<<"SIZE oF iVec : "<<iVec.size() <<"\n";
    cout<<"CAPACITY oF iVec : "<<iVec.capacity() <<"\n";
    cout<<"Is Empty iVec : "<<iVec.empty() <<"\n";

    iVec.at(0);
    iVec.front();
    iVec.back();


    iVec.insert(iVec.begin()+1,100);
    iVec.erase(iVec.begin());

    iVec.resize(4);
    iVec.reserve(100);

    for (int iCnt:iVec)
    {
        cout<<iCnt;
    }



    return 0;
}