#include<stdio.h>

void Quick_sort(int [],int ,int);
int n,a[10];
int main()
{
    int i;
    printf("\n Hoe many elements to enter :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter Array elements[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Array before sort\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d \t",a[i]);
    }
    Quick_sort(a,0,n-1);
    printf("\n Array after sort\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d \t",a[i]);
    }
    return 0;
}
void Quick_sort(int a[],int left,int right)
{
    int pivot,l,r;
    l=left;
    r=right;

    pivot=a[left];
    while(left<right)
    {
        while((a[right]>=pivot) && (right>left))
        {
            right--;
        }
        if(left!=right)
        {
            a[left]=a[right];
            left++;
        }
        while((a[left]<=pivot)&&(left<right))
        {
            left++;
        }
        if(left!=right)
        {
            a[right]=a[left];
            right--;
        }
    }
    a[left]=pivot;
    pivot=left;
    left=l;
    right=r;
    if(left<pivot)
    {
        Quick_sort(a,left,pivot-1);
    }
    if(right>pivot)
    {
        Quick_sort(a,pivot+1,right);
    }
}