/*
MARY WAITHERA KAMAU
CT101/G/24877/24
*/
#include<stdio.h>

struct students{
       char name[15];
       int marks;
       };
int main(){
    int i;
    struct students students[5];
//opening a file pointer
    FILE*fptr;
//inputing details
printf("enter details of 5 students\n:");
for (i=0;i<5;i++){
//prompting the user to key in details
    printf("enter name\n:");
    scanf("%s",students[i].name);
    printf("enter marks\n:");
    scanf("%d",&students[i].marks);}
//open file in write
fptr=fopen("C:\\Users\\PC\\Desktop\\assignment programming\\sample3.bin","wb");
if(fptr==NULL){
//declare error if the file cannot open
               printf("error");
               exit(1);}
//
fwrite(students,sizeof(struct students),5,fptr);
//close file
fclose(fptr);
//open file in read mode
fptr=fopen("C:\\Users\\PC\\Desktop\\assignment programming\\sample3.bin","rb");
if(fptr==NULL){
               printf("error");
               exit(1);}
//read student details using fread
fread(students,sizeof(struct students),5,fptr);
//close file
fclose(fptr);
//display students details
printf("student details");
for(i=0;i<5;i++){
                 printf("name:%s\n",students[i].name);
                 printf("marks:%d\n",students[i].marks);}
  return 0;
}
