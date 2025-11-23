/*
Enter the number of rows :
4
Enter the number of cols :
4
1       1       1       1
2       2       2       2
3       3       3       3
4       4       4       4
*/
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int i , j = 0;
    

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
             printf("%d\t",i);
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