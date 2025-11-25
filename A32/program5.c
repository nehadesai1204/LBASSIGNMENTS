#include<stdio.h>
/*
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1 2 3 4 5




*/
void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
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
