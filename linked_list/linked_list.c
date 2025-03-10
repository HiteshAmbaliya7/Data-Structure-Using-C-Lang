#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;  // variable for store data
    struct node *next;  //pointer variable to store address of next node
};
struct node *start;
// functions that performed in linked list
void insertfirst(struct node *p){
     int no;
     printf("\n Enter int data to insert in list : ");
     scanf("%d",&no);
     start=(struct node*)malloc(sizeof(struct node));
     start -> data=no;
     start ->next=p;
}
void insertlast(struct node *p)
{
    int no;
    printf("\n Enter int data to insert in list :");
    sacnf("%d",&no);
    if(start==NULL){
        start=(struct node *)malloc(sizeof(struct node));
        start -> data =no;
        start ->next=NULL;
    }
    else{
        while(p->next!=NULL)
        {
            p=p->next;
        };
        p->next = (struct node *)malloc(sizeof(struct node));
        p->next->data=no;
        p->next->next=NULL;
    }
}
void display(struct node *p){
    if (start == NULL){
        printf("\n Linked list is empty");
    }
    else{
        while(p!=NULL)
        {
            printf("\t %d",p->data);
            p=p->next;
        };
    }
} 
 
 
int main(){
          
 
return 0;
}