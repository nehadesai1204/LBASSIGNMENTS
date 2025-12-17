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

// Return second maximum element
int SecondMaximum(PNODE Head)
{
    int Max = -2147483648;
    int SecondMax = -2147483648;

    while (Head != NULL)
    {
        if (Head->data > Max)
        {
            SecondMax = Max;
            Max = Head->data;
        }
        else if ((Head->data > SecondMax) && (Head->data != Max))
        {
            SecondMax = Head->data;
        }
        Head = Head->next;
    }
    return SecondMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 51);
    InsertLast(&head, 21);
    InsertLast(&head, 75);
    InsertLast(&head, 41);

    Display(head);

    iRet = SecondMaximum(head);
    printf("Second maximum element is : %d\n", iRet);

    return 0;
}
