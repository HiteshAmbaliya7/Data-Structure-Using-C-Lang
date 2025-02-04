#include <stdio.h>
// #include<conio.h> //=> It is run on turboC++ or turboC7

#define MAX_SIZE 100  // Adjust this if needed

void merge(int arr[], int start, int mid, int end) {
    int temp[MAX_SIZE];  // Temporary array with a fixed size
    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            k++;
            i++;
        } else {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= end) {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (int idx = 0; idx < k; idx++) {
        arr[start + idx] = temp[idx];
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {12, 31, 35, 8, 32, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    // clrscr();

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // getch();

    return 0;
}
