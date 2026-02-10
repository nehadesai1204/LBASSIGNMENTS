#include<iostream>
using namespace std;
// input : 4
//expected output :  1 * 2 * 3 * 4 = 24

int iFact = 1; //extern storage class
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : factorial
//  Description   : Write a recursive program which accept number from user and
//                  factorial of a number
//  Input         : Integer
//  Output        : Integer
//  Author        : Neha Navin Desai
//  Date          : 09/02/2026
//
////////////////////////////////////////////////////////////////////////////////
void factorial(int iNo)
 {

    if(iNo >= 1)
    {
        iFact = iFact * iNo;
   
       factorial(--iNo); // pre decrement
    }
    
 }
////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : " << "\n";
    cin >> iValue;

    iRet = factorial(iValue);

    cout << iRet;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : 879
//  Output  : 24
//
////////////////////////////////////////////////////////////////////////////////