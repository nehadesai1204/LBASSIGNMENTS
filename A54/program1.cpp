#include<iostream>
using namespace std;

template <class T>
bool Search(T *arr, int iSize, T value)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    Search(Arr, 5, 30);

    return 0;
}
