#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(i > iNo)        // base condition
    {
        return;
    }

    printf("%d\t",i); 
    i++;     

    Display(iNo);   // recursive call
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
