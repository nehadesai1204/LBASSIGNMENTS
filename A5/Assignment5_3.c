//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment5_3.c
//  Description     : Check Leap year
//  Author          : Rutuja Bharat varal
//  Date            : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void FindLeap(int iYear)
{
    
        if (iYear % 400 == 0)
        {
            printf("It is a Leap Year");
        }
        
        else if(iYear % 100 == 0)
        {
            printf("It is a not  Leap Year");
        }

        else if(iYear % 4 == 0)
        {
            printf("It is a Leap Year");
        }
        
        else 
        {
            printf("It is not  a Leap Year");
        }

    
}
int main()
{
    int iYear = 0;

    printf("Enter Your Year \n");
    scanf("%d",&iYear);

    FindLeap(iYear);
    return 0;
}