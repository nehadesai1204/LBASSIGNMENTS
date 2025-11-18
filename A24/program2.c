#include <stdio.h>
#include <stdlib.h>

// Return the smallest number
int Smallest(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Smallest(ptr, iLength);
    printf("Smallest number is: %d\n", iRet);

    free(ptr);
    return 0;
}
