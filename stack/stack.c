#include<stdio.h>
#define SIZE 10
int tos=-1;
struct student
{
    int rollNumber;
    char name[20];

};

struct student stack[SIZE];

int main()
{
    int ch;
    void push();
    void display();
    void pop();
    void peep();

    
    do {
        printf("\n 1. insert");
        printf("\n 2. display");
        printf("\n 3. delete");
        printf("\n 4. find");
        printf("\n 0. Exit");
        printf("\n Enter your choice :");
        scanf("%d",&ch);
        switch (ch)
        {
             case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                peep();
                break;
            case 0:
                printf("\n End of the program");
                break;
            default:
                printf("\n Please Enter 10 to 4 Only");
                break;
        }
    }while(ch!=0);
    return 0;
}
void push()
{
    if(tos == SIZE ){
        printf("\n Stsck is full");
    }
    else
    {
        tos++;
        printf("\n Enter roll no :");
        scanf("%d",&stack[tos].rollNumber);
        printf("\n Enter Name :");
        scanf("%s",&stack[tos].name);
    }
    return;
}
void display()
{
    int i;
    if(tos == -1){
        printf("\n Stack is Empty....");
    }
    else{
        printf("\n RollNo \t name");
        for(i=tos;i>=0;i--)
        {
            printf("\n %d \t %s",stack[i].rollNumber,stack[i].name);
        }
    }
    return;
}
void pop()
{
    if(tos == -1){
        printf("\n Stack is Empty....");
    }
    else{
        printf("\n Delete Element");
        printf("\n rollnumber=%d \t name=%s",stack[tos].rollNumber,stack[tos].name);
        tos--;
    }
    return;
}
void peep()
{
    int i,sv,flag=0;  // here sv is search variable
    if(tos == -1){
        printf("\n Stack is Empty....");
    }
    else{
        printf("\n Enter SearchElement :");
        scanf("%d",&sv);
        for(i=tos;i>=0;i--)
        {
            if(stack[i].rollNumber == sv)
            {
                flag = 1;
                printf("\n RollNumber =%d  Name= %s",stack[i].rollNumber,stack[i].name);
                break;
            }
        }
        if(flag==0)
        {
            printf("\n %d is not found.......",sv);
        }
    }
    return;
}