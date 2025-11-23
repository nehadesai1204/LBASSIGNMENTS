/*Enter the number of rows :
4
Enter the number of cols :
4
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7

*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i, j;
    int iCount;

    for(i = 1; i <= iRow; i++)     // Row loop
    {
        iCount = i;               // Start number for each row = row number

        for(j = 1; j <= iCol; j++)   // Column loop
        {
            printf("%d\t", iCount);
            iCount++;             // next number
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter the number of cols : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}
