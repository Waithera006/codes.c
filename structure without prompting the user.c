/*
NAME:MARY WAITHERA 
REG NO:CT101/G/24877/24
*/
#include<stdio.h>
#include<string.h>
struct book{
       char title[30];
       char author[30];
       char ISBN[13];
       int publicationyear;
       float price;
}book;

int main(){
//structure program without prompting the user
    strcpy(book.title,"introduction to c programming");
    strcpy(book.author,"john smith");
    strcpy(book.ISBN,"9782556890025");
    book.publicationyear=2022;
    book.price=49.99;
printf("the book title is %s\n",book.title);
printf("the book author is %s\n",book.author);
printf("the book ISBN is %s\n",book.ISBN);
printf("the book publicationyear is %d\n",book.publicationyear);
printf("the book price is %.4f\n",book.price);
return 0;
}
