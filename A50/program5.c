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

void Display(PNODE Head, int pos)
{
    int iCnt = 1;

    while(Head != NULL)
    {
        if(iCnt == pos)
        {
            printf("Element at position %d is : %d\n", pos, Head->data);
            return;
        }
        Head = Head->next;
        iCnt++;
    }
    printf("Invalid position\n");
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

            
    Display(head, 3);   // display element at 3rd position

    
return 0;
    

}

