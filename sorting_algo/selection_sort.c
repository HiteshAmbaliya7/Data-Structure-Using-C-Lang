#include<stdio.h>


int selection_sort(int arr[],int n)
{
    int i,j,min_idx,temp;     // min_idx is minimum index and temp is temperery variable
    for(i=0;i<n;i++)
    {
            min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              min_idx=j;  
            }
         }
        
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;

    }
    
}
void printarr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    int arr[]={64,25,12,22,11};
    n=sizeof(arr)/sizeof(arr[0]);
    //print original array
    printf("\n Array Before sort :\n ");
    printarr(arr,n);

    selection_sort(arr,n);

    // sorted array
    printf("\n Array After Sorting :\n ");
    printarr(arr,n);
    
    
    
    return 0;   
}