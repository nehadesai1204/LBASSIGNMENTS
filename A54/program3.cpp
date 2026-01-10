#include<iostream>
using namespace std;

template <class T>
T SumOdd(T *arr, int iSize)
{
    T sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 != 0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}

int main()
{
    int Arr[] = {10, 21, 32, 43, 54};

    SumOdd(Arr, 5);

    return 0;
}
