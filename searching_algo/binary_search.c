#include <stdio.h>

// Binary search function
int binary_search(int arr[], int size, int ter)
{
    int st = 0, end = size - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (ter > arr[mid])
        {
            st = mid + 1;
        }
        else if (ter < arr[mid])
        {
            end = mid - 1; 
        }
        else
        {
            return mid;
        }
    }
    return -1; 
}

// Main function
int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ter = 12;

    printf("%d\n", binary_search(arr, size, ter));
    return 0;
}
