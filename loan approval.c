/*
AUTHOR:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
DATE:27/SEP/2024
*/
#include<stdio.h>
int main(){
    int age;
    float income;
//age and income of the applicant
printf("enter your age:");
scanf("%d",&age);
printf("enter your income:");
scanf("%f",&income);
//approval of loans
if(age>=21 && income>=21000){
            printf("congratulations you qualify for a loan\n");}
else{
     printf("unfortunately we are unable to offer you a loan at this time");}
return 0;}
