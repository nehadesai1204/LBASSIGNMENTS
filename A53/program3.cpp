#include<iostream>
using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    T max = arr[0];
    T smax = arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    return smax;
}

int main()
{
    int Arr[] = {10, 50, 20, 40, 30};

    cout << "Second Maximum: " << SecondMax(Arr, 5);

    return 0;
}
