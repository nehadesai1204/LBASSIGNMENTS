//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4_4.c
//  Description     : Accept Number  from user and return summation of all its nonFactors
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int SumNonFact(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }

    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt)!=0)
        {
            iSum =iSum +iCnt;

        }
    }
           return iSum;

}
int main()
{
   int iValue = 0;
   int iRet   = 0;

   printf("Enter the number");
   scanf("%d",&iValue);

   iRet =SumNonFact(iValue);

   printf("Sum of NonFactors is %d\n",iRet);

   return 0;

}