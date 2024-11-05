#include<iostream>
using namespace std;

template<class R>
R Addition(R fNo1, R fNo2)
{
    R fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}
int main()
{
    float fValue1 = 23.1, fValue2 = 4.5;
    float fRet = 0.0f;

    fRet = Addition(fValue1, fValue2);

    cout<<"The Addition of float numbers:"<<fRet;
    return 0;
}