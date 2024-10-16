/*
NAME:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
*/
//do while loop
#include<stdio.h>
int sum=0,start,stop;
int main(){

        printf("enter when to start:");
        scanf("%d",&start);
        printf("enter when to stop:");
        scanf("%d",&stop);
do{
        printf("%d\n",start);
        sum+=start;
        start++;}
 while(start<=stop);
printf("the sum is %d",sum);
return 0;}
