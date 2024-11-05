#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans  = 0;

    Ans = No1 + No2;

    return Ans;
}
int main()
{
    int iValue1 = 10;
    int iValue2 = 21;
    int iRet = 0;

    iRet = Addition(iValue1,iValue2);

    cout<<"The Addition of 2 numbers:"<<iRet;

    return 0;
}