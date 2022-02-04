
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

//function declaration
void printBook(struct Books *book);

int main(void) {

    struct Books Book1;

    strcpy(Book1.title, "Sam I Am" );
    strcpy(Book1.author, "Dr. Seuss");
    strcpy(Book1.subject, "Childrens");
    Book1.book_id = 12125;

    //pass in the address of book one
    printBook(&Book1);
    

    return 0;
}


//takes a pointer to a book
void printBook( struct Books *book ) {
    printf( "Book title: %s\n", book->title);
    printf( "Book author: %s\n", book->author);
    printf( "Book subject: %s\n", book->subject);
    printf( "Book id: %d\n", book->book_id);
}



