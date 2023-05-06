#include <stdio.h>

struct book {
    char author[50];
    char book_name[50];
    float price;
    int edition;
};

void input(struct book *, int);
void display(struct book *, int);

int main() {
    int n;
    printf("Enter the number of books:\n");
    scanf("%d", &n);
    
    struct book books[n];
    input(books, n);
    display(books, n);
    
    return 0;
}

void input(struct book *books, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter the information for book %d:\n", i+1);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Book Name: ");
        scanf("%s", books[i].book_name);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Edition: ");
        scanf("%d", &books[i].edition);
    }
}

void display(struct book *books, int n) {
    int i;
    printf("\n\nBook Information\n\n");
    printf("%-20s %-20s %-10s %-10s\n", "Author", "Book Name", "Price", "Edition");
    for (i = 0; i < n; i++) {
        printf("%-20s %-20s %-10.2f %-10d\n", books[i].author, books[i].book_name, books[i].price, books[i].edition);
    }
}

