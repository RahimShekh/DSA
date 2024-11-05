#include<iostream>
using namespace std;

template <class T>
T Maximum(T Brr[],T iNo)
{
    T iMax = 0;

    for(int i = 0; i < iNo; i++)
    {
        if(iMax < Brr[i])
        {
            iMax = Brr[i];
        }
    }
    return iMax;
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

    int iRet = Maximum(Arr,iSize);

    cout<<"The Maximum No of array :"<<iRet;

    delete []Arr;
    return 0;
}