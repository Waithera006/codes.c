/*
NAME:MARY WAITHERA
REG NO:CT101/G/24877/24
*/
#include<stdio.h>
#include<string.h>
struct book{
       char title[30];
       char author[30];
       int publicationyear;
       char ISBN[13];
       float price;
}book;

int main(){
//prompting the user to key in their details
    printf("enter book title");
    scanf("%s",&book.title);
    printf("enter book author");
    scanf("%s",&book.author);
    printf("enter the publicationyear");
    scanf("%d",&book.publicationyear);
    printf("enter book ISBN");
    scanf("%s",&book.ISBN);
    printf("enter the book price");
    scanf("%f",&book.price);
//the output
    printf("book title is %s\n",book.title);
    printf("book author is %s\n",book.author);
    printf("book publicationyear is %d\n",book.publicationyear);
    printf("book ISBN is %s\n",book.ISBN);
    printf("book price is %f\n",book.price);
return 0;
}
