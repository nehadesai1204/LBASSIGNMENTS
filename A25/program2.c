#include <stdio.h>
#include <stdlib.h>

// Function displays numbers divisible by 5
void DisplayDiv5(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)   // logic here
        {
            printf("%d ", Arr[iCnt]);   // display here
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

    printf("Numbers divisible by 5 are:\n");
    DisplayDiv5(ptr, iLength);    // function displays them

    printf("\n");

    free(ptr);
    return 0;
}
