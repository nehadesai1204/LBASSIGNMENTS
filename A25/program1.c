#include <stdio.h>
#include <stdlib.h>

// Return difference between summation of even and odd numbers
int DiffEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
           iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = DiffEvenOdd(ptr, iLength);

    printf("Difference (Even sum - Odd sum) is: %d\n", iRet);

    free(ptr);
    return 0;
}
