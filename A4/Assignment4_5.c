//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4_5.c
//  Description     : Accept Number  from user and Display Difference between Summation of all its factors & NonFactors
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int FactDiff(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }

    int iCnt = 0;
    int iSum1= 0;
    int iSum2= 0;


    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            iSum1 =iSum1 + iCnt;

        }
        else
        {
            iSum2 =iSum2 + iCnt;
            
        }
    }
           return iSum1 - iSum2;

}
int main()
{
   int iValue = 0;
   int iRet   = 0;

   printf("Enter the number\n");
   scanf("%d",&iValue);

   iRet =FactDiff(iValue);

   printf("Difference Between  Summation of all its Factors & NonFactors is %d\n",iRet);

   return 0;

}