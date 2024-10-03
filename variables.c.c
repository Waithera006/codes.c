/*
AUTHOR:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
DATE:20/SEP/2024
*/
//variables and data types
//preprocessor directive scanf(),printf()
#include<stdio.h>
int main(){
//declaration and initialization
char a='h';
char name[]={};
int age;
float salary;
double budget;
printf("enter a character:");
scanf("%c",&a);
printf("the character is %c\n",a);
printf("enter name:");
scanf("%s",&name);
printf("your name is %s\n",name);
printf("enter age:");
scanf("%d",&age);
printf("your age is %d\n",age);
printf("enter salary:");
scanf("%f",&salary);
printf("the salary is %f\n",salary);
printf("enter budget:");
scanf("%lf",&budget);
printf("your budget is %lf\n",budget);
return 0;}




