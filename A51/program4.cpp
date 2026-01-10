#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :   SearchLast
// Input  :          Generic array, Integer size, Generic value
// Output :          Integer
// Description :     Returns last occurrence position of given value
// Author :          Neha Navin Desai
// Date :            08-01-2026
//
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iPos = -1;   // stores last position

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iPos = iCnt + 1;   // 1-based position
        }
    }
    return iPos;
}

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr, 9, 10);

    cout << iRet << "\n";   // Output : 9

    return 0;
}
