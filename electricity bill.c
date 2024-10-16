/*
NAME:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
*/
#include<stdio.h>
int main()
{
int customerID,unitConsumed;
char customerName[13]={};
float chargeperunit,totalbill;
//prompt the user to key in necessary details
    printf("enter customerID:\n",customerID);
    scanf("%d",&customerID);
    printf("enter customerName:\n",customerName);
    scanf("%s",&customerName);
    printf("enter unitConsumed:\n",unitConsumed);
    scanf("%d",&unitConsumed);
//calculating the unit consumed and its charge per unit
if(unitConsumed<200){chargeperunit=1.20;}
else if(unitConsumed>=200<400){chargeperunit=1.50;}
else if(unitConsumed>=400<600){chargeperunit=1.80;}
else {chargeperunit=2.00;}
//calculate the total bill
totalbill=unitConsumed*chargeperunit;
if (totalbill>400){totalbill+=totalbill*0.15;}
//the output required
printf("the customerID is %d\n",customerID);
printf("the customerName is %s\n",customerName);
printf("the charge per unit is %.2f\n",chargeperunit);
printf("the unitConsumed is% d\n",unitConsumed);
printf("%the totalbill is %.2f\n",totalbill);
return 0;}
