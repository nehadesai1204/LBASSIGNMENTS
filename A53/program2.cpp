#include<iostream>
using namespace std;

template <class T>
bool CheckSorted(T *arr, int iSize)
{
    for(int i = 0; i < iSize - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    if(CheckSorted(Arr, 5))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
