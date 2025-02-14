#include <stdio.h>
#define SIZE 10

int q[SIZE];
int r=-1,f=-1;
int main(){
    int ch;
    void insert();
    void Display();
    void Delete();
    void search();


    do {
        printf("\n Enter 1 to Insert Data ");
        printf("\n Enter 2 to Display Data ");
        printf("\n Enter 3 to Delete Data ");
        printf("\n Enter 4 to Search Data");
        printf("\n Enter 0 to Exit ");
        printf("\n Enter Your Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            Display();
            break;
        case 3:
            Delete();
            break;
        case 4:
            search();
            break;

        case0:
         printf("-------- END OF PROGRAM----------------");
        
        default:
            printf("Plese Enter 1 to 4 only");
            break;
        }
    }while(ch!=0);
    
    return 0;
}
void insert()
{
    if(r==SIZE-1)
    {
        printf("queue is full");
    }
    else{
        r++;
        printf("Enter Any Number :");
        scanf("%d",&q[r]);
        if(f==-1)
        {
            f=0;
        }
    }
}
void Display()
{
    int i;
    printf("->");
    if(f==-1){
        printf("\n Queue is Empty");
    }
    else{
        for(i=f;i<=r;i++)
        {
            printf("\n %d",q[i]);
        }
    }
    printf("<-");
}
void Delete()
{
    if(f==-1)
    {
        printf("\n Queue is empty");
    }
    else{
        printf("\n Delete Element :%d",q[f]);
        f++;
    }
}
void search()
{
    int i,sv,flag=0;
    if(f==-1)
    {
        printf("\n Queue is Empty");
    }
    else
    {
        printf("\n Enter Search Value :");
        scanf("%d",&sv);
        for(i=f;i<=r;i++)
        {
            if(q[i]==sv)
            {
                printf("\n %d is found at %d th position",sv,i+1);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\n %d is not found in Queue",sv);
        }
    }
}