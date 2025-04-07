#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;          // variable for store data
    struct node *next; // pointer variable to store address of next node
};
struct node *start;
// functions that performed in linked list
void insertfirst(struct node *p)
{
    int no;
    printf("\n Enter int data to insert in list : ");
    scanf("%d", &no);
    start = (struct node *)malloc(sizeof(struct node));
    start->data = no;
    start->next = p;
}
void insertlast(struct node *p)
{
    int no;
    printf("\n Enter int data to insert in list :");
    scanf("%d", &no);
    if (start == NULL)
    {
        start = (struct node *)malloc(sizeof(struct node));
        start->data = no;
        start->next = NULL;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        };
        p->next = (struct node *)malloc(sizeof(struct node));
        p->next->data = no;
        p->next->next = NULL;
    }
}
void display(struct node *p)
{
    if (start == NULL)
    {
        printf("\n Linked list is empty");
    }
    else
    {
        while (p != NULL)
        {
            printf("\t %d", p->data);
            p = p->next;
        }
    }
}
void insertspecific(struct node *p)
{
    int no, pos, i;
    struct node *temp;
    printf("\n Enter int data to insert to list :");
    scanf("%d", &no);
    printf("\n enter position : ");
    scanf("%d", &pos);
    for (int i = 0; i < pos-1; i++)
    {
        p = p->next;
        if (p == NULL)
        {
            printf("\n enter proper position");
            break;
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = no;
        temp->next = p->next;
        p->next = temp;
    }
}
void deletefirst(struct node *p)
{
    if (start == NULL)
    {
        printf("\n linked lis is empty");
    }
    else
    {
        printf("\n Delete elemrnt is -> %d ", p->data);
        start = start->next;
        free(p);
    }
}
void deletelast(struct node *p)
{
    struct node *temp;
    if (start == NULL)
    {
        printf("\n linked list is Empty");
    }
    else
    {
        while (p->next->next != NULL)
        {
            p = p->next;
        }
        temp = p->next;
        p->next = NULL;
        printf("\n Delete element is -> %d", p->data);
        free(temp);
    }
}
void deletespecific(struct node *p)
{
    int pos, i;
    struct node *temp;
    if (start == NULL)
    {
        printf("\n Linked list is Empty ");
    }
    else
    {
        printf("\n Enter position :");
        scanf("%d", &pos);
        for (i = 0; i < pos; i++)
        {
            p = p->next;
        }
        temp = p->next;
        printf("\n Delete element -> %d ", temp->data);
        p->next = p->next->next;
        free(temp);
    }
}
void search(struct node *p)
{
    int key, pos = 0, flag = 0;
    if (start == NULL)
    {
        printf("\n Linked list is empty");
    }
    else
    {
        printf("\n Enter  Search value :");
        scanf("%d", &key);
        while (p != NULL)
        {
            if (p->data == key)
            {
                printf("\n %d is found at %d position", key, pos);
                flag = 1;
            }
            p = p->next;
            pos++;
        }
        if (flag == 0)
        {
            printf("\n %d is not found in list", key);
        }
    }
}

void sort(struct node *p)
{
    int no;
    struct node *temp;
    if (start == NULL)
    {
        printf("\n Linked list is empty");
    }
    else
    {
        while (p->next != NULL)
        {
            temp = p->next;
            while (temp != NULL)
            {
                if (p->data > temp->data)
                {
                    no = temp->data;
                    temp->data = p->data;
                    p->data = no;
                }
                temp = temp->next;
            }
            p = p->next;
        }
    }
}

int main()
{
    int ch;
    start =NULL;
    while (ch != 0)
    {
        printf("\n 1 insert first");
        printf("\n 2 insert last");
        printf("\n 3 insert specific");
        printf("\n 4 Delete first");
        printf("\n 5 Delete last");
        printf("\n 6 Delete specific");
        printf("\n 7  search");
        printf("\n 8  sort");
        printf("\n 9 Display");
        printf("\n 0 EXIT");

        // enter user choice
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertfirst(start);
            break;
        case 2:
            insertlast(start);
            break;
        case 3:
            insertspecific(start);
            break;
        case 4:
            deletefirst(start);
            break;
        case 5:
            deletelast(start);
            break;
        case 6:
            deletespecific(start);
            break;
        case 7:
            search(start);
            break;
        case 8:
            sort(start);
            break;
        case 9:
            display(start);
            break;
        case 0:
            printf("\n .................END OF PRIGRAM ........");
            break;
        default:
            printf("\n Plese enter  0 to 8");
        }
    }

    return 0;
}