/*Enter the number of rows :
4
Enter the number of cols :
4
1       2       3       4
-1     -2      -3       -4
1       2       3       4
-1     -2      -3       -4
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int i , j = 0;
   int iCount = 1;
   char ch = 'a';
    

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1  , iCount = 1 ; j<= iCol ; j++)
        {
            if( i % 2 == 0)
            {
                printf("%c\t",-iCount);
                
            }
            else
            {
                
                printf("%d\t",iCount);
                iCount++;
                
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