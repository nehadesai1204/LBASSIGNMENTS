/*
Enter the number of rows :
4
Enter the number of cols :
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int i , j = 0;
   int iCount = 1;
    

    for(i = 1 ; i <= 9; i++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
             printf("%d\t",iCount);
             iCount++;
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