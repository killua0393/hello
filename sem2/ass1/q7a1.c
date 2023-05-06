#include <stdio.h>

#define SIZE 6

void bubble_sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size-1; i++) {
        for (j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE] = {5, 1, 4, 2, 8, 7};
    
    printf("Original Array: ");
    print_array(arr, SIZE);
    
    bubble_sort(arr, SIZE);
    
    printf("Sorted Array: ");
    print_array(arr, SIZE);
    
    return 0;
}
