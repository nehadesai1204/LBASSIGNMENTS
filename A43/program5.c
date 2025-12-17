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

// Display sum of digits of every element
void DisplaySumDigits(PNODE Head)
{
    int iNo = 0, iDigit = 0, iSum = 0;

    printf("Sum of digits of each element : ");

    while (Head != NULL)
    {
        iNo = Head->data;
        iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d ", iSum);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head, 11);
    InsertLast(&head, 28);
    InsertLast(&head, 123);
    InsertLast(&head, 75);

    Display(head);

    DisplaySumDigits(head);

    return 0;
}
