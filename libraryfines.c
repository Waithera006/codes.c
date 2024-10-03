/*
NAME:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
DATE:27/SEP/2024
*/
#include<stdio.h>
int main(){
  int bookID;
  int duedate;
  int returndate;
  int daysoverdue;
//inputs of information needed
printf("enter bookID:");
scanf("%d",& bookID);
printf("enter duedate the date:");
scanf("%d", & duedate);
printf("enter returndate the date:");
scanf("%d", & returndate);
int finerate;
int fineamount;
//calculate the days overdue
daysoverdue=returndate-duedate;
if (daysoverdue>=-1<=0){finerate=0;}
else if (daysoverdue>=1<=7){finerate=20;}
else if (daysoverdue>8<=14){finerate=50;}
else{finerate=100;}
//calculate the fine amount
fineamount=finerate*daysoverdue;
printf("bookID:%d\n",bookID);
printf("duedate:%d\n",duedate);
printf("returndate:%d\n",returndate);
printf("daysoverdue:%d\n",daysoverdue);
printf("finerate:%d\n",finerate);
printf("fineamount:%d\n",fineamount);
return 0;}



