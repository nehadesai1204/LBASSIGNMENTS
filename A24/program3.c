#include <stdio.h>
#include <stdlib.h>

// Return difference between largest & smallest
int DiffLargeSmall(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
            iMax = Arr[iCnt];

        if(Arr[iCnt] < iMin)
            iMin = Arr[iCnt];
    }

    return iMax - iMin;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = DiffLargeSmall(ptr, iLength);
    printf("Difference between largest and smallest is: %d\n", iRet);

    free(ptr);
    return 0;
}
