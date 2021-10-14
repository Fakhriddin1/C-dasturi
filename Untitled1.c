#include <stdio.h>
#include <string.h>
struct Books {
char title[50];
char author[50];
char subject[100];
int book_id;
};
int main( ) {
struct Books Book1; /* book1 strukturasini e’lon qilish*/
struct Books Book2; /* book2 strukturasini e’lon qilish*/
strcpy(Book1.title, "C Programming");
strcpy(Book1.author, "Timur Kuchkarov");
strcpy(Book1.subject, "C Programming Tutorial");
Book1.book_id=1230005;
strcpy( Book2.title, "Java Programming");
strcpy( Book2.author, "Temur Kuchkarov");
strcpy( Book2.subject, "Java Programming Tutorial");
Book2.book_id=123006;
printf( "Book 1 title : %s\n", Book1.title);
printf( "Book 1 author : %s\n", Book1.author);
printf( "Book 1 subject : %s\n", Book1.subject);
printf( "Book 1 book_id : %s\n", Book1.book_id);
printf(" \n-----------------------------------------------------\n");
printf(" Book 2 title : %s\n", Book2.title);
printf(" Book 2 author : %s\n", Book2.author);
printf(" Book 2 subject : %s\n", Book2.subject);
printf(" Book 2 book_id : %s\n", Book2.book_id);
return 0;
}
