#include <stdio.h>
#include <string.h>

typedef struct {
    int ID;
    char title[100];
    char authorList[100];
    int pubYear;
    float price;
    int edition;
} Book;

void booksFrom2022(Book books[], int n) {
    printf("Books published in 2022:\n");
    for (int i = 0; i < n; i++) {
        if (books[i].pubYear == 2022) {
            printf("Title: %s, Price: %.2f\n", books[i].title, books[i].price);
        }
    }
}

float averagePrice(Book books[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += books[i].price;
    }
    return total / n;
}

int main() {
    FILE *file = fopen("in.txt", "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n); // Read the number of books
    Book books[n];

    // Read book details
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d %s %s %d %f %d", &books[i].ID, books[i].title,
               books[i].authorList, &books[i].pubYear, &books[i].price, &books[i].edition);
    }
    fclose(file);

    // Display books published in 2022
    booksFrom2022(books, n);

    // Display average price of all books
    printf("Average price of all books: %.2f\n", averagePrice(books, n));

    return 0;
}
