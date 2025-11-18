#include <stdio.h>
#include <stdlib.h>

// Accept n numbers and return frequency of 11
int Count11(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
    }
    return iFreq;
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

    iRet = Count11(ptr, iLength);
    printf("Frequency of 11 in the array is: %d\n", iRet);

    free(ptr);
    return 0;
}
