#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>     // for bool, true, false

// Accept array and check whether No is present or not
bool CheckNumber(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;      // Number found
        }
    }
    return false;             // Number not found
}

int main()
{
    int iLength = 0, iCnt = 0, iNo = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    printf("Enter the number to search: ");
    scanf("%d", &iNo);

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

    bRet = CheckNumber(ptr, iLength, iNo);

    if(bRet == true)
    {
        printf("%d is present in the array\n", iNo);
    }
    else
    {
        printf("%d is NOT present in the array\n", iNo);
    }

    free(ptr);
    return 0;
}
