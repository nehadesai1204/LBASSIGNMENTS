//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment5_1.c
//  Description     : Take Number  from user and Check if its Even or not
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool  CheckEvenOdd(int iNo)
    {
      if((iNo % 2)==0)
      {
        return true;

      }
      else
      {
        return false;
      }

    }

int main()
{
    int iValue1 = 0 ;
    int iRet  = false; 

    printf("Enter Your Number \n");
    scanf("%d",&iValue1);

    iRet =CheckEvenOdd(iValue1);

    if (iRet == true)
    {
        printf("It is an Even Number");
    }
    else
    {
        printf("It is an Odd Number");
    }

     return 0;
}