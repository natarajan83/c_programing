#include <stdio.h>
#include <string.h>
 
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) {

   Book book;
 
   strcpy( book.title, "Let Us C");
   strcpy( book.author, "Yeswanth Kanitkar"); 
   strcpy( book.subject, "C Programming");
   book.book_id = 0;
 
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);

   return 0;
}
