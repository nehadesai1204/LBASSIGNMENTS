#include <stdio.h>
#include <stdlib.h>

// Return index of last occurrence of No
int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iPos = -1;     // default: not found

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;    // keep updating → last occurrence
        }
    }
    return iPos;
}

int main()
{
    int iLength = 0, iCnt = 0, No = 0;
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

    printf("Enter number to search: ");
    scanf("%d", &No);

    iRet = LastOcc(ptr, iLength, No);

    printf("Last occurrence index of %d is: %d\n", No, iRet);

    free(ptr);
    return 0;
}
