#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :   Reverse
// Input  :          Generic array, Integer size
// Output :          Nothing
// Description :     Reverses elements of array in-place
// Author :          Neha Navin Desai
// Date :            08-01-2026
//
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T temp;

    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    cout<<"Before Reverse:\n";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

    Reverse(arr, 9);

    cout<<"\nAfter Reverse:\n";
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
