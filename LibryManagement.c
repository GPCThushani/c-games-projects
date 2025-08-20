#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Structure to hold book details
struct Book {
    char name[100];
    char author[100];
    int pages;
    float cost;
};

int main() {
    struct Book books[MAX_BOOKS];
    int choice;
    int count = 0; // To count total books

    do {
        // Menu
        printf("\n1. Add Book details\n");
        printf("2. Display the list of books and its details\n");
        printf("3. Display the total no. of books in the library\n");
        printf("4. Exit\n");

        printf("\nEnter the number: ");
        scanf("%d", &choice);
        getchar(); // To consume leftover newline

        switch (choice) {
            case 1:
                if (count < MAX_BOOKS) {
                    printf("\nYou can add the details of the book\n");

                    printf("Enter the book name: ");
                    fgets(books[count].name, sizeof(books[count].name), stdin);
                    books[count].name[strcspn(books[count].name, "\n")] = '\0'; // Remove newline

                    printf("Enter the author name: ");
                    fgets(books[count].author, sizeof(books[count].author), stdin);
                    books[count].author[strcspn(books[count].author, "\n")] = '\0';

                    printf("Enter the number of pages: ");
                    scanf("%d", &books[count].pages);

                    printf("Enter the cost of the book: ");
                    scanf("%f", &books[count].cost);

                    count++;
                } else {
                    printf("Book limit reached.\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo books in the library yet.\n");
                } else {
                    printf("\nYou can view the list of books\n");
                    printf("The list of books are:\n");

                    for (int i = 0; i < count; i++) {
                        printf("\nThe name of the book is: %s\n", books[i].name);
                        printf("The name of the author is: %s\n", books[i].author);
                        printf("The number of pages are: %d\n", books[i].pages);
                        printf("The cost of the book is: %.2f\n", books[i].cost);
                    }
                }
                break;

            case 3:
                printf("\nTotal number of books in the library are: %d\n", count);
                break;

            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid option. Please enter 1-4.\n");
        }

    } while (choice != 4);

    return 0;
}
