#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter number of cols:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
