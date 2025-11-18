#include <stdio.h>
#include <stdlib.h>

// Print elements within a given range
void RangeDisplay(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        // Nested if as required
        if(Arr[iCnt] >= iStart)
        {
            if(Arr[iCnt] <= iEnd)
            {
                printf("%d ", Arr[iCnt]);
            }
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iStart = 0, iEnd = 0;
    int *ptr = NULL;

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

    printf("Enter start of range: ");
    scanf("%d", &iStart);

    printf("Enter end of range: ");
    scanf("%d", &iEnd);

    printf("Elements in the range [%d, %d] are:\n", iStart, iEnd);
    RangeDisplay(ptr, iLength, iStart, iEnd);

    free(ptr);
    return 0;
}
