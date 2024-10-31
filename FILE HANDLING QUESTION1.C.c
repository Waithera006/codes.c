//program to read the names and marks of 5 students
/*
MARY WAITHERA KAMAU
CT101/G/24877/24
*/
#include<stdio.h>
#include <stdlib.h>
//structure
struct students{
char name[15];
int marks;
};
int main(){
    int i;
    struct students students[5];
//declaring a file pointer
    FILE*fptr;
    printf("enter details for 5 students:\n");
    for(i=0;i<5;i++){
//prompting to input the details
printf("enter the name of the student");
scanf("%s",&students[i].name);
printf("enter the marks");
scanf("%d",&students[i].marks);}
//open file in write mode
 fptr=fopen("C:\\Users\\PC\\Desktop\\assignment programming\\sample.txt1","w");
//displaying an error message if the file cant be opened
    if(fptr==NULL){
                    printf("error");
                    exit(1);}
for(i=0;i<5;i++){
//output
fprintf(fptr,"%s",students[i].name);
fprintf(fptr,"%d",students[i].marks);}
//close the file
fclose(fptr);

  return 0;
}
