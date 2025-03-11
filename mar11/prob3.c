//3. Write a function to initialize a Book struct with a title and publication date. Then print the details of the book in main.

#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    int publicationYear;
} Book;

void initializeBook(Book *b, const char *title, int year) {
    strncpy(b->title, title, sizeof(b->title) - 1);  
    b->title[sizeof(b->title) - 1] = '\0';           
    b->publicationYear = year;
}

int main() {
    
    Book myBook;
    
    initializeBook(&myBook, "The Great Gatsby", 1925);
    
    printf("Book Title: %s\n", myBook.title);
    printf("Publication Year: %d\n", myBook.publicationYear);
    return 0;
}
