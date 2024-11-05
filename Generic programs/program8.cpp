#include<iostream>
using namespace std;

template <class T>
class Arrayx
{
    public:
    T *Arr;
    T iSize; 

    Arrayx();
    void Accept();
    void Display();
    T Addition();
    ~Arrayx();
};
 Arrayx<int>::Arrayx()
    {
        iSize = 0;

        Arr = new int[iSize];
    }

    void Arrayx<int>:: Accept()
    {
        cout<<"Enter the no of Elements:"<<endl;
        cin>>iSize;

        cout<<"Enter the Elements:\n";
        for(int i = 0; i < iSize; i++)
        {
            cin>>Arr[i];
        }
    }

    void Arrayx<int> :: Display()
    {
        cout<<"Entered Elements :\n";
        for(int i = 0; i < iSize; i++)
        {
            cout<<Arr[i]<<endl;
        }
    }

    template <class T>
    T Arrayx<T>:: Addition()
    {
        T iSum = 0;

        for(int i = 0; i < iSize; i++)
        {
            iSum = iSum + Arr[i];    
        }
        return iSum;
    }
    template <class T>
    Arrayx<T> :: ~Arrayx()
    {
        delete []Arr;
    }
int main()
{   
    Arrayx <int> obj;

    obj.Accept();
    obj.Display();

    int iRet = obj.Addition();

    cout<<"The addition of Array:"<<iRet;
    return 0;
}