#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T iMax = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] > iMax)
        {
            iMax = arr[i];
        }
    }
    return iMax;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.8};

    int iRet = Max(arr,5);
    cout << iRet << endl;     // 50

    float fRet = Max(brr,4);
    cout << fRet << endl;     // 9.8

    return 0;
}
