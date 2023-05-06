#include <stdio.h>

void read_sparse(int r, int c, int s[][c]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &s[i][j]);
        }
    }
}

void create_triplet(int r, int c, int s[][c], int t[][3]) {
    int k = 1;
    t[0][0] = r;
    t[0][1] = c;
    t[0][2] = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] != 0) {
                t[k][0] = i;
                t[k][1] = j;
                t[k][2] = s[i][j];
                k++;
                t[0][2]++;
            }
        }
    }
}

void transpose(int t[][3], int res[][3]) {
    int r = t[0][0], c = t[0][1], k = 1;
    res[0][0] = c;
    res[0][1] = r;
    res[0][2] = t[0][2];
    for (int j = 0; j < c; j++) {
        for (int i = 1; i <= t[0][2]; i++) {
            if (t[i][1] == j) {
                res[k][0] = t[i][1];
                res[k][1] = t[i][0];
                res[k][2] = t[i][2];
                k++;
            }
        }
    }
}

void display_triplet(int t[][3]) {
    printf("Triple form of the matrix:\n");
    for (int i = 0; i <= t[0][2]; i++) {
        printf("%d %d %d\n", t[i][0], t[i][1], t[i][2]);
    }
}

int main() {
    int r, c;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &r, &c);
    int s[r][c], t[r * c][3], res[r * c][3];
    read_sparse(r, c, s);
    create_triplet(r, c, s, t);
    printf("Original matrix:\n");
    display_triplet(t);
    transpose(t, res);
    printf("Transpose of the matrix:\n");
    display_triplet(res);
    return 0;
}
