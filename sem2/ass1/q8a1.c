8.#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int arr[][COLS], int transposed[][ROWS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
}

void print_matrix(int arr[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposed[COLS][ROWS];
    
    printf("Original Matrix:\n");
    print_matrix(arr);
    
    transpose(arr, transposed);
    
    printf("Transposed Matrix:\n");
    print_matrix(transposed);
    
    return 0;
}
