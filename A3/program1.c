#include<stdio.h>
//write a program which accepts one number from user nd print that number of even numbers on screen 
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iNum = 0;

    while(iCnt <= iNo)
    {
        if(iNum % 2 == 0)
        {
            printf("%d",iNum);
        }
        iNum++;
    }
   



}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}