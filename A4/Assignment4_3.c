//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4_3.c
//  Description     : Accept Number  from user and Display its Nonfactors 
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayNonFactors(int iNo)
{
  if (iNo <= 0)
  {
    return;
  }
  int iCnt = 0 ;
  for (iCnt =1 ;iCnt <= iNo ; iCnt++)
  {
    if((iNo%iCnt)!=0)
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

   DisplayNonFactors(iValue);

    return 0;
}