//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6_3.c
//  Description     : Accept two numbers from user and check whether that numbers are equal to each other or not 
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
  if (iNo1 ==  iNo2)
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
   int iValue2 = 0 ;

   bool bRet = false ;

   printf("Please enter  First number\n");
   scanf("%d",&iValue1);

   printf("Please enter  Second number\n");
   scanf("%d",&iValue2);


   bRet=ChkEqual(iValue1,iValue2);


   if(bRet == true)
   {
    printf("Both Numbers are equal\n");
   }
  else
  {
    printf("Both Numbers are not Equal\n");
  }

    return 0;
}