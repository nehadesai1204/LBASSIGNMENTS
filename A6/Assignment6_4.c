//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment6_4.c
//  Description     : Accept Three numbers from user and print its Multiplication
//  Author          : Rutuja Bharat varal
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


 int Multiply(int iNo1, int iNo2,int iNo3)
{
    int iMult = 1;

   if (iNo1  != 0 )
   {
    iMult = iMult *iNo1;
   }

    if (iNo2  != 0 )
   {
    iMult = iMult *iNo2;
   }

    if (iNo3 != 0 )
   {
    iMult = iMult *iNo3;
   }
 return  iMult;
}
int main()
{
   int iValue1 = 0 ;
   int iValue2 = 0 ;
   int iValue3 = 0 ;


  int iRet = 0;

   printf("Please enter  First number\n");
   scanf("%d",&iValue1);

   printf("Please enter  Second number\n");
   scanf("%d",&iValue2);

   printf("Please enter  Third number\n");
   scanf("%d",&iValue3);

   iRet = Multiply(iValue1,iValue2,iValue3);

   printf("Multiplication of Three Numbers is %d",iRet);

   return 0;
}