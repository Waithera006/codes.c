/*
NAME:MARY WAITHERA KAMAU
REG NO:CT101/G/24877
*/
//while loop
#include<stdio.h>
int start,stop,sum=0;
int main(){
    printf("enter when to start:");
    scanf("%d",&start);
    printf("enter when to stop:");
    scanf("%d",&stop);
while(start<stop){
                   printf("%d\n",start);
                   start++;
                   sum+=start;}
printf("the sum is %d",sum);
return 0;}
