#include <stdio.h>
#define SIZE 10

struct stud
{

    int rno;
    char name[20];
};
struct stud c_q[SIZE];
int f = -1, r = -1;

int main()
{
    int ch;
    void insert();
    void display();
    void delete ();
    void search();

    do
    {
        printf("\n 1 Insert");
        printf("\n 2 Display");
        printf("\n 3 Delete");
        printf("\n 4 Search");
        printf("\n 0 Exit");

        // input user choice
        printf("\nEnter your choice :: ");
        scanf("%d", &ch);

        // use switch case conditional statement
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete ();
            break;
        case 4:
            search();
            break;
        case 0:
            printf("\n END OF PROGRAM");
            break;
        default:
            printf("plese enter 0 to 4 input only");
        }
    } while (ch != 0);

    return 0;
}
// funnctions
// Here is insert function

void insert()
{
    if (f == 0 && r == SIZE - 1)
    {
        printf("\n Queue is full ");
    }
    else
    {
        if (r == SIZE - 1 && f > 0)
        {
            r = 0;
        }
        else
        {
            r++;
        }
        printf("\nEnter Roll Number :");
        scanf("%d", &c_q[r].rno);
        printf("\n Enter Name :");
        scanf("%s", &c_q[r].name);
        if (f == -1)
        {
            f = 0;
        }
    }
}

// Here is Display function
void display()
{
    int i;
    if (f == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("front =>");
        if (r < f)
        {
            for (i = f; i <= SIZE - 1; i++)
            {
                printf("\n %d\t%s", c_q[i].rno, c_q[i].name);
            }
            for (i = 0; i <= r; i++)
            {
                printf("\n %d\t%s", c_q[i].rno, c_q[i].name);
            }
        }
        else
        {
            for (i = f; i <= r; i++)
            {
                printf("\n %d\t%s", c_q[i].rno, c_q[i].name);
            }
        }
        printf("<= reare");
    }
}

// Here is the Delete function
void delete()
{
    if (f == -1)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (f == SIZE - 1)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}

// Here is Search function
void search()
{
    int i, sv, flag = 0;
    // above sv is search variable that can inputed by user
    //  flag is indicater for sv is found or not
    if (f == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("\n Enter Search Element :");
        scanf("%d", &sv);
        if (r < f)
        {
            for (i = f; i <= SIZE - 1; i++)
            {
                if (c_q[i].rno == sv)
                {
                    printf("\n%d is found ", sv);
                    flag = 1;
                    break;
                }
            }
            for (i = 0; i < r; i++)
            {
                if (c_q[i].rno == sv)
                {
                    printf("\n%d is found ", sv);
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            for (i = f; i <= r; i++)
            {
                if (c_q[i].rno == sv)
                {
                    printf("\n%d is found ", sv);
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                printf("\n %d is not found in Queue ", sv);
            }
        }
    }
}