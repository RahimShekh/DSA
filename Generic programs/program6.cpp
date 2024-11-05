#include<iostream>
using namespace std;

template <class T>
T Minimum(T Brr[],T iNo)
{

    T iMin = Brr[0];

    for(int i = 0; i < iNo; i++)
    {
        if(iMin > Brr[i])
        {
            iMin = Brr[i];
        }
    }
    return iMin;
}
int main()
{
    int *Arr = NULL;
    int iSize = 0;

    cout<<"Enter the No Elements:"<<endl;
    cin>>iSize;

    Arr = new int[iSize];

    cout<<"Enter the Elements\n:";

    for(int i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }

    int iRet = Minimum(Arr,iSize);

    cout<<"The Minimum No of array :"<<iRet;

    delete [] Arr;
    return 0;
}