//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment14_4.c
//  Description     : Accept number from user and count Frequency of 4 in it
//  Author          : Rutuja Bharat Varal
//  Date            : 31/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountFrequency(int iNo)

{
   int iDigit = 0;
   int iCount = 0;

   while (iNo != 0)
   {
     iDigit = iNo % 10;

     if(iDigit == 4)
     {
       iCount ++ ;
     }
     iNo = iNo/ 10;
   }
   return iCount ;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

   iRet = CountFrequency(iValue);
   
     printf("Frequency of 4 is %d ",iRet);
   
    
}