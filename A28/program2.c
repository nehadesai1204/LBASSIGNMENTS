/*
Enter the number of rows :
4
Enter the number of cols :
4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
*/
#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int i , j = 0;
    char ch = 'A';
    char ch1 = 'a';
    

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ,ch ='A',ch1 ='a'; j<= iCol ; j++,ch++,ch1++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch1);

            }
            else
            {
                 printf("%c\t",ch);

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