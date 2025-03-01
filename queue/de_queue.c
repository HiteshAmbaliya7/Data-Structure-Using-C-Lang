#include<stdio.h>
#define SIZE 10  
int f=-1,r=-1;
int d_q[SIZE]; 
int main(){
   int ch;
   void insertfront();
   void insertrear();
   void display();
   void deletefront();
   void deleterear();
   do{
        printf("\n 1 InsertFront");
        printf("\n 2 Insertrear");
        printf("\n 3 Display");
        printf("\n 4 DeleteFront");
        printf("\n 5 DelteRear");
        printf("\n 0 EXIT");

        // input choice form user
        printf("\n Enter Your choice :");
        scanf("%d",&ch);

        // here use of conditionl switch compace choice
        switch(ch){
            case 1:
            insertfront();
            break;
        case 2:
            insertrear();
            break;
        case 3:
            display();
            break;
        case 4:
            deletefront();
            break;
        case 5:
            deleterear();
            break;
        case 0:
            printf("END OF PROGRAM");
            break;
        default:
            printf("\n plece enter 0 to 5 only");
        }
   }while(ch!=0);       
 
return 0;
}
// Here functions
// insertfront function 
void insertfront(){
    int no;
    if(f==0 && r=SIZE-1){
        printf("\n Queue is full ");
    }
    else{
        printf("\nENter Number :");
        scanf("%d",&no);
        if(f==r){
            f=-1;
            r=-1;
            d_q[f]=no;
        }
        else if(f==0){
            f=SIZE-1;
            d_q[f]=no;
        }
        else{
            f--;
            d.q[f]=no;
        }
    }
}