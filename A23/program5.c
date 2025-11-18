#include <stdio.h>
#include <stdlib.h>

// Return product of all odd elements
int ProductOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProd = 1;
    int bFound = 0;   // to check if any odd number exists

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)   // odd number check
        {
            iProd = iProd * Arr[iCnt];
            bFound = 1;
        }
    }

    if(bFound == 0)
    {
        return 0;  // no odd elements
    }

    return iProd;
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

    iRet = ProductOdd(ptr, iLength);

    printf("Product of all odd elements is: %d\n", iRet);

    free(ptr);
    return 0;
}
