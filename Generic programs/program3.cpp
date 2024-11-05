#include<iostream>
using namespace std;

template <class T>
void Swap(T &A,T &B)
{
    T temp = 0;

    temp = A;
    A  = B;
    B = temp;
}
int main()
{
    int iValue1 = 30,iValue2 = 33;

    cout<<"The Value of iValue1:"<<iValue1<<endl;
    cout<<"The Value of iValue2:"<<iValue2<<endl;

    Swap(iValue1,iValue2); 

    cout<<"The value of iValue1 after swap:"<<iValue1<<endl;
    cout<<"The value of iValue2 after swap:"<<iValue2<<endl;

    return 0;
}