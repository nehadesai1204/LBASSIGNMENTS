/*
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)              // First & last row
            {
                printf("%d\t", j);
            }
            else if(j == 1)                      // First column
            {
                printf("1\t");
            }
            else if(j == iCol)                   // Last column
            {
                printf("%d\t", iCol);
            }
            else                                 // Middle portion
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
