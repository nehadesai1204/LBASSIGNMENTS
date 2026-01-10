#include<iostream>
using namespace std;

template <class T>
T SecondMin(T *arr, int iSize)
{
    T min = arr[0];
    T smin = arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            smin = min;
            min = arr[i];
        }
        else if(arr[i] < smin && arr[i] != min)
        {
            smin = arr[i];
        }
    }
    return smin;
}

int main()
{
    int Arr[] = {10, 50, 20, 40, 30};

    cout << "Second Minimum: " << SecondMin(Arr, 5);

    return 0;
}
