#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T iMin = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < iMax)
        {
            iMin = arr[i];
        }
    }
    return iMin;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.8};

    int iRet = Min(arr,5);
    cout << iRet << endl;     

    float fRet = Min(brr,4);
    cout << fRet << endl;     

    return 0;
}
