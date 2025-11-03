//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6_2.c
//  Description     : Accept no from user and check that no is greater than 100 or not 
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
  if (iNo > 100)
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
   int iValue = 0 ;
   bool bRet = false ;

   printf("Please enter number\n");
   scanf("%d",&iValue);


   bRet=ChkGreater(iValue);


   if(bRet == true)
   {
    printf("%d is Greater than 100\n",iValue);
   }
  else
  {
    printf("%d is not Greater than 100\n", iValue);
  }


    return 0;


}