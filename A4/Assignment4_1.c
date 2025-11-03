//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment4_1.c
//  Description     : Accept Number  from user and Display Multiplication of its factors
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int MultFactor(int iNo)
{
if (iNo <= 0)
 {
    return  0;
 }
 int iCnt = 0;
 int iMult = 1;

 for (iCnt = 1; iCnt <= iNo/2 ; iCnt++)
 {
    if ((iNo % iCnt)==0)
    {
        iMult = iMult *iCnt ;
    }
 }
 return iMult;
}
int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter your Number\n");
    scanf("%d",&iValue);
    
    iRet = MultFactor(iValue);
    printf("Multiplication factor is %d",iRet);

    return 0;

}