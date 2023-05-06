#include <stdio.h>

#define SIZE 8

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int key = 5;
    int low = 0, high = SIZE-1, mid, index = -1;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    if (index == -1) {
        printf("Element not found in the array.\n");
    }
    else {
        printf("Element found at index %d.\n", index);
    }
    
    return 0;
}
