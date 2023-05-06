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
    int s[r][c], t[r * c][3];
    read_sparse(r, c, s);
    create_triplet(r, c, s, t);
    display_triplet(t);
    return 0;
}
