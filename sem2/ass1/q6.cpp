#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, searchElement;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocating an array of size n
    int* arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &searchElement);

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index %d\n", foundIndex);
    } else {
        printf("Element not found in the array.\n");
    }

    // Deallocating the dynamically allocated array
    free(arr);
    return 0;
}
