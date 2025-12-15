#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 0)          // base condition
    {
        return;
    }

    printf("%d\t", iNo);  // print first
    Display(iNo - 1);     // recursive call
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
