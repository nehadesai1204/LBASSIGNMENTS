#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int Arr[] = {10, 50, 20, 40, 30};

    Min(Arr, 5);

    return 0;
}
