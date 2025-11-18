#include <stdio.h>
#include <stdlib.h>

// Accept n numbers & return index of first occurrence of No
int FirstOcc(int Arr[], int iSize, int No)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt;      // return first index
        }
    }
    return -1;  // No not found
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    int No = 0;
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

    printf("Enter the number to search: ");
    scanf("%d", &No);

    iRet = FirstOcc(ptr, iLength, No);

    if(iRet == -1)
    {
        printf("Number not found in array\n");
    }
    else
    {
        printf("First occurrence of %d is at index: %d\n", No, iRet);
    }

    free(ptr);
    return 0;
}
