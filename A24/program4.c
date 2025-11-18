#include <stdio.h>
#include <stdlib.h>

// Function to display all 3-digit numbers
void Display3Digit(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        // Check for 3-digit positive or negative numbers
        if((Arr[iCnt] >= 100 && Arr[iCnt] <= 999) ||
           (Arr[iCnt] <= -100 && Arr[iCnt] >= -999))
        {
            printf("%d ", Arr[iCnt]);
        }
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

    printf("3-digit numbers are:\n");
    Display3Digit(ptr, iLength);

    printf("\n");

    free(ptr);
    return 0;
}
