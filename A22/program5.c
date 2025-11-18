#include <stdio.h>
#include <stdlib.h>

// Accept n numbers and return frequency of No
int CountFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iNo = 0;
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

    printf("Enter the number to check frequency: ");
    scanf("%d", &iNo);

    iRet = CountFrequency(ptr, iLength, iNo);

    printf("Frequency of %d in the array is: %d\n", iNo, iRet);

    free(ptr);
    return 0;
}
