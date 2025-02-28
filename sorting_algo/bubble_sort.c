#include <stdio.h>

void swap(int *arr, int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr,j,j+1);
            }
        }
    }
}
int main()
{

    int i,n;
    int arr[10];
    n=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<=n-1;i++)
    {
        printf("Enter array valve %d:\n",i);
        scanf("%d",&arr[i]);
    }
    printf("\nthe inputed  array is :\n ");
    for(i=0;i<=n-1;i++)
    {
        printf("  %d\t",arr[i]);
        
    }
    bubblesort(arr,n);
    printf("\n sorted array :\n");
    for(i=0;i<=n-1;i++)
    {
        printf(" %d\t",arr[i]);
        
    }
    
    return 0;
}