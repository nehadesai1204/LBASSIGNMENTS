/*
1 2 3 4
  2 3 4
    3 4
      4


*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j < i)
            {
                printf("\t");      // print spaces
            }
            else
            {
                printf("%d\t", j); // print numbers
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

