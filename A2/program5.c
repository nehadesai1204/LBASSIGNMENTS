#include <stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter no :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is eeven",bRet);

    }
    else
    {
        printf("%d is odd",bRet);
    }

    return 0;

}

