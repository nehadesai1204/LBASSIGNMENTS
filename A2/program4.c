#include <stdio.h>

// Accept 2 numbers from user and display first number second number of times
// Input : 2 3
// Output : 2 2 2

void Display(int iNo, int iFreq)
{
    int iCnt = 0;

    if (iNo < 0)     // convert negative to positive
    {
        iNo = -iNo;
    }
    if (iFreq < 0)   // convert negative to positive
    {
        iFreq = -iFreq;
    }

    for (iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
