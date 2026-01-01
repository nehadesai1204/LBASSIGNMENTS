#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void Display(PNODE first)
{
    while(first !=NULL)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL\n");
    
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
       iCount++;
        first = first->next;
    }

    return iCount;
}

void InsertFirst(PPNODE first , int no)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if(*first == NULL)
   {
       *first = newn;
   }
   else
   {
        newn->next = *first;
        *first = newn;
   }
}


void InsertLast(PPNODE first , int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if(*first == NULL)
   {
       *first = newn;
   }
   else
   {
      temp = *first;
      while(temp->next != NULL)  //type 2
      {
        temp = temp->next;

      }
      temp->next = newn;

   }

    
}

int CountPrime(PNODE Head)
{
    int i = 0;
    int flag = 0;
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->data > 1)
        {
            flag = 1;
            for(i = 2; i <= Head->data / 2; i++)
            {
                if(Head->data % i == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
            {
                iCount++;
            }
        }
        Head = Head->next;
    }
    return iCount;
}


    
int main()
{
        PNODE head = NULL;
        int iRet = 0;
        

        InsertFirst(&head,51);
        InsertFirst(&head,21);
        InsertFirst(&head,11);

        Display(head);
        iRet = Count(head);

        printf("Number of nodes are : %d\n",iRet);

        InsertLast(&head , 101);
        InsertLast(&head , 111);
        InsertLast(&head , 121);

        Display(head);
        iRet = Count(head);

        
    iRet = CountPrime(head);
    printf("Count of prime numbers : %d\n", iRet);
       
   
    return 0;

}
