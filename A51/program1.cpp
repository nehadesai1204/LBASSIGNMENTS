#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :   Display
// Input  :          Generic value, Integer
// Output :          Prints value on screen
// Description :     Prints given value specified number of times
// Author :          Neha Navin Desai
// Date :            08-01-2026
//
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << value << " ";
    }
    cout << "\n";
}

///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);

    return 0;
}
