#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// Insert node at last position
void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

// Display linked list
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

// Return addition of all elements
int Addition(PNODE Head)
{
    int iSum = 0;

    while (Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 51);
    InsertLast(&head, 21);
    InsertLast(&head, 75);
    InsertLast(&head, 4);

    Display(head);

    iRet = Addition(head);
    printf("Addition of all elements is : %d\n", iRet);

    return 0;
}
