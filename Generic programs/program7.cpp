#include<iostream>
using namespace std;

template <class T>
class Arrayx
{
    public:
    T *Arr;
    T iSize;

    Arrayx()
    {
        iSize = 0;

        Arr = new int[iSize];
    }

    void Accept()
    {
        cout<<"Enter the no of Elements:"<<endl;
        cin>>iSize;

        cout<<"Enter the Elements:\n";
        for(int i = 0; i < iSize; i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        cout<<"Entered Elements :\n";
        for(int i = 0; i < iSize; i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

    T Addition()
    {
        T iSum = 0;

        for(int i = 0; i < iSize; i++)
        {
            iSum = iSum + Arr[i];    
        }
        return iSum;
    }
    ~Arrayx()
    {
        delete []Arr;
    }
};
int main()
{   
    Arrayx <int> obj;

    obj.Accept();
    obj.Display();

    int iRet = obj.Addition();

    cout<<"The addition of Array:"<<iRet;
    return 0;
}