/*AUTHOR:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
DATE:23/SEP/2024
*/

#include <stdio.h>
#include <math.h>
int main(){
 float principal,rate,time,si,ci;
 int n;
 printf("enter the principal amount:");
 scanf ("%f",&principal);
 printf ("enter the interest rate:");
 scanf ("%f",& rate);
 printf ("enter the time in years:");
 scanf ("%f",&time);
 //calculating the simple interest
 si=(principal*rate*time)/100;
 printf ("simple interest is%.4f\n",si);
 //calculating compound interest
 printf("enter the number of times interest is compounded per year:");
 scanf ("%d",&n);
 ci=principal*pow((1+rate/(n*100)),n*time);
  printf("compound interest is%.4f\n",ci);
 return 0;
}




