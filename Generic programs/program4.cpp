#include<iostream>
using namespace std;

template <class T>
T Addition(T Brr[],T iNo)
{
    T iSum = 0;

    for(int i = 0; i < iNo; i++)
    {
        iSum = iSum + Brr[i];
    }
    return iSum;
}
int main()
{
    int *Arr = NULL;
    int iSize = 0;

    cout<<"Enter the No Elements:"<<endl;
    cin>>iSize;

    Arr = new int[iSize];

    cout<<"Enter the Elements:";

    for(int i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }

    int iRet = Addition(Arr,iSize);

    cout<<"The Addition of array :"<<iRet;

    delete []Arr;
    return 0;
}