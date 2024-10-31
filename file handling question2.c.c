/*
MARY WAITHERA
CT101/G/24877/24
*/
#include<stdio.h>
#include <stdlib.h>
struct student{
       char name[15];
       int marks;
       };
int main(){
    int n;
    int i;
    struct student students[30];
//opening a file pointer
    FILE*fptr;
//inputing details
printf("enter number of students:");
scanf("%d",&n);
printf("enter details for %d students:\n",n);
for (i=0;i<n;i++){
//prompting the user to key in details
    printf("enter name:");
    scanf("%s",students[i].name);
    printf("enter marks:");
    scanf("%d",&students[i].marks);}
//open file in append
fptr=fopen("C:\\Users\\PC\\Desktop\\assignment programming\\sample2.txt","a");
if(fptr==NULL){
//declare error if the file cannot open
               printf("error");
               exit(1);}


fprintf(fptr,"%s\n",students[i].name);
fprintf(fptr,"%d\n",students[i].marks);
//closing the file
fclose(fptr);

printf("student details appended to file.\n");
  return 0;
}
