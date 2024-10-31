//simple text file prompting the user to input a sentence to 100 characters
/*
MARY WAITHERA KAMAU
CT101/G/24877/24
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    char sentence [100];
FILE*fptr;
//opening a file pointer
fptr=fopen("C:\\Users\\PC\\Desktop\\data.txt\\data.txt1","w");

//declaring error if the file cant be opened
    if(fptr==NULL){
    printf("error");
    exit(1);}
//prompting the user to input a sentence
    printf("enter a sentence(up to 100 characters):");
    scanf("%s\n",&sentence);
    fprintf(fptr,"%s\n",sentence);
//closing the file
    fclose(fptr);

  return 0;
}
//function to read and display the content of "data.txt"
void readcontent(){
    FILE*fptr;
    fptr=fopen("C:\\Users\\PC\\Desktop\\data.txt\\data.txt1","r");
    if(fptr==NULL){
        printf("error opening this file for reading");
        exit(1);
    }
    fclose(fptr);
}
//function to append a second sentence to "data.txt"
void appendsentence(){
    FILE*fptr;
    fptr=fopen("C:\\Users\\PC\\Desktop\\data.txt\\data.txt1","a");
    if(fptr==NULL){
        printf("error to append the file");
        exit(1);
    }
char secondsentence[100];
printf("enter a second sentence(up to 100 characters):");
scanf("%s\n",&secondsentence);
fprintf(fptr,"%s\n",secondsentence);
    fclose(fptr);
}













