#include <stdio.h>

struct book {
    char title[100];
    char author[100];
    int year_published;
};

int main() {
    struct book books[3];
    int i;

    // Prompt the user to enter information about each book
    for (i = 0; i < 3; i++) {
        printf("Enter information about book #%d:\n", i+1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Year published: ");
        scanf("%d", &books[i].year_published);
    }

    // Display the information about each book
    printf("\nHere is the information about each book:\n");
    for (i = 0; i < 3; i++) {
        printf("Book #%d\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year published: %d\n", books[i].year_published);
    }

    return 0;
}
//output: Enter book title: To Kill a Mockingbird
Enter author name: Harper Lee
Enter number of pages: 281
Enter book title: 1984
Enter author name: George Orwell
Enter number of pages: 328
Enter book title: The Catcher in the Rye
Enter author name: J.D. Salinger
Enter number of pages: 277//
