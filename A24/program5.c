#include <stdio.h>
#include <stdlib.h>

// Function to display summation of digits of each number
void DisplayDigitSum(int Arr[], int iSize)
{
    int iCnt = 0, iNo = 0, iSum = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        if(iNo < 0)      // handle negative numbers
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("Summation of digits of %d is: %d\n", Arr[iCnt], iSum);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    DisplayDigitSum(ptr, iLength);

    free(ptr);
    return 0;
}
