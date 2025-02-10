#include<stdio.h>

/* 
    psoudo code:
    linear_search(array,size,key)
    retun -1;
    if item ==  key:
    return index;
    return linear_search(array,size-1,key)
*/

int linear_search(int arr[],int size,int key)
{
    if(size==0)
    {
        return -1;
    }
    if(arr[size-1]==key)
    {
        return size-1;
    }
    return linear_search(arr,size-1,key);
}
int main()
{
    int arr[] ={5,15,6,9,4};
    int key= 15;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = linear_search(arr,size,key);
    if(index==-1)
    {
        printf(" Key is not Found in Array. \n");
    }
    else{
        printf("The element %d is found at %d index of given array.\n",key,index);
    }
    return 0;
}