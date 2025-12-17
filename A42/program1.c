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

// Search FIRST occurrence
int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while (Head != NULL)
    {
        if (Head->data == no)
        {
            return iPos;
        }
        iPos++;
        Head = Head->next;
    }
    return -1;   // element not found
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 10);
    InsertLast(&head, 20);
    InsertLast(&head, 30);
    InsertLast(&head, 40);
    InsertLast(&head, 50);
    InsertLast(&head, 30);
    InsertLast(&head, 70);

    Display(head);

    iRet = SearchFirstOcc(head, 30);
    printf("First occurrence is at position : %d\n", iRet);

    return 0;
}
