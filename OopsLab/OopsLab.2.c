#include <stdio.h>

struct Book {
    int bookId;
    char title[100];
    char authorName[100];
    float price;
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf(" %s", b.title);

    printf("Enter Author Name: ");
    scanf(" %s", b.authorName);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\n----- Book Details -----\n");
    printf("Book ID      : %d\n", b.bookId);
    printf("Title        : %s\n", b.title);
    printf("Author Name  : %s\n", b.authorName);
    printf("Price        : %.2f\n", b.price);

    return 0;
}