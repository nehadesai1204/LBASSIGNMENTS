//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4_2.c
//  Description     : Accept Number  from user and Display its factors in reverse / Decreasing  order
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void FactRev(int iNo)
{
   int iCnt = 0 ;

   for (iCnt = iNo/2 ; iCnt >= 1; iCnt--)
   {
    if ((iNo % iCnt)==0)
    {
        printf("%d\t",iCnt);
    }
   }
}
int main()
{
   int iValue = 0;

   printf("Enter number");
   scanf("%d",&iValue);

   FactRev(iValue);

    return 0;
}