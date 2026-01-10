#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;
    T temp;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    Reverse(Arr, 5);

    return 0;
}
