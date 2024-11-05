#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    T*Arr;
    int isize;

    ArrayX();
    ~ArrayX();
    void Accept();
    void Display();
    int Maximum();
};

template <class T>
ArrayX<T> ::ArrayX()
{
    isize = 0;

    Arr = new int[isize];
}

template<class T>
ArrayX<T> ::~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter the no of elements:";
    cin>>isize;

    cout<<"Enter the elemetns:\n";

    for(int i = 0; i < isize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout<<"Enterd elements are:"<<endl;

    for(int i = 0; i < isize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int main()
{
    ArrayX<int> *obj = new ArrayX<int>();

    obj->Accept();
    obj->Accept();
    return 0;
}