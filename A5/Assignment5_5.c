//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment5_5.c
//  Description     : Find Largest Among Three Numbers
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FindMax(int iNo1, int iNo2, int iNo3)

{
    
      int iMax = iNo1;

      if (iNo2 > iMax)
      {
        iMax= iNo2;
      }

      if(iNo3 > iMax)
      {
        iMax = iNo3;
      }
      return iMax;
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet= 0;



    printf("Enter First Number \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number \n");
    scanf("%d",&iValue3);

    iRet= FindMax(iValue1,iValue2,iValue3);

    printf("%d is an Maximum Number \n ", iRet);
    return 0;
}