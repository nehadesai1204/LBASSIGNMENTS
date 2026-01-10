#include<iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 20, 40};

    Replace(Arr, 5, 20, 99);

    cout << "Array after replacement: ";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
