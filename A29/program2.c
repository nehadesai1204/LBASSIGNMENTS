/*
Enter the number of rows :
4
Enter the number of cols :
4
1 3 5 7
2 4 6 8
1 3 5 7
2 4 6 8
*/
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int i , j = 0;
   int iCount = 1;
    

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
            if( i % 2 == 0)
            {
                printf("%d\t",j * 2);
            }
            else
            {
                
                printf("%d\t",j*2 - 1 );
                
            }
            
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