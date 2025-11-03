//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment11_4.c
//  Description     : Accept Range from user and print numbers between that range on screen in reverse order 
//  Author          : Rutuja Bharat Varal
//  Date            : 31/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void RangeDisplayRev(iNo1,iNo2)

{
    int iCnt = 0 ;

     if (iNo1 > iNo2 )
    {
        printf("Invalid Range");
    }

    for (iCnt = iNo2; iCnt >= iNo1 ; iCnt--)
    {
       printf("%d\t",iCnt);
    }
    
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
   


    printf("Enter your starting number\n");
    scanf("%d",&iValue1);

    printf("Enter your Ending number\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);


    return 0;
}