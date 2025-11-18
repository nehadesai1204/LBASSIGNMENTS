#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>   

// Accept n numbers and check whether 11 is present or not
bool Check11(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;   // 11 found
        }
    }
    return false;          // 11 not found
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

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

    bRet = Check11(ptr, iLength);

    if(bRet == true)
    {
        printf("11 is present in the array\n");
    }
    else
    {
        printf("11 is NOT present in the array\n");
    }

    free(ptr);
    return 0;
}
