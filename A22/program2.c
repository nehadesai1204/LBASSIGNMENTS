#include <stdio.h>
#include<stdlib.h>
//Accept n number from users and return frequency of even and odd and return their diff
int FreqDifference(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    
    for(iCnt = 0; iCnt <= iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;

        }
        else
        {
            iOdd++;
        }
    }
    return iEven - iOdd;
    

}

int main()
{
    int iLength = 0 , iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter no of elements : ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if( NULL == ptr)    //industrial way of coding
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = FreqDifference(ptr , iLength);
    printf("difference b etween even and odd is %d\n",iRet);

    free(ptr);
    return 0;

}