//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment9_2.c
//  Description     : Convert USD to INR 
//  Author          : Rutuja Bharat Varal
//  Date            : 22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int USDtoINR(int iNo)
{
    int iINR = 0;
    iINR = 70 * iNo;
    return iINR;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter USD\n");
    scanf("%d",&iValue);

    iRet = USDtoINR(iValue);

    printf("%d Dollars is %d INR",iValue,iRet);

    return 0;
}