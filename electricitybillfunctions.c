/*
NAME:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
ELECTRICITY BILL USING CFUNCTIONS
*/
#include<stdio.h> //scanf(),printf()
//function prototype
float totalbill(int unitConsumed,float chargeperunit);
float totalcharge(float totalbill);
int main()
{
//declaring the variables
int customerID,unitConsumed;
char customerName[13]={};
float chargeperunit,totalbill,totalcharge;
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
//calculating the totalbill
totalbill=unitConsumed*chargeperunit;
if (totalbill>400){totalcharge=(totalbill+=totalbill*0.15);}
//the output required
printf("the customerID is %d\n",customerID);
printf("the customerName is %s\n",customerName);
printf("the charge per unit is %.2f\n",chargeperunit);
printf("the unitConsumed is% d\n",unitConsumed);
printf("%the totalbill is %.2f\n",totalbill);
printf("the totalcharge is%f\n",totalcharge);
return 0;
}

//functions
float totalbill (int unitConsumed,float chargeperunit){
float totalbill;
return totalbill;
}

float totalcharge(float totalbill){
float totalcharge;
return totalcharge;
}
