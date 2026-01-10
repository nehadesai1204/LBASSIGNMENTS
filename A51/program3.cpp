#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :   SearchFirst
// Input  :          Generic array, Integer size, Generic value
// Output :          Integer
// Description :     Returns first occurrence position of given value
// Author :          Neha Navin Desai
// Date :            08-01-2026
//
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt; 
        }
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr, 9, 40);

    cout << iRet << "\n";   // Output : 6

    return 0;
}
