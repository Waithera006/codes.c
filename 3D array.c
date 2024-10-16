/*
NAME:MARY WAITHERA KAMAU
REG NO:CT101/G/24877/24
*/
//3D array
#include<stdio.h>
int main(){
    int i,j,k;
    int marks[2][2][3]={{{20,25,30},{10,15,20}},{{20,25,30},{10,15,20}}};
    for (i=0;i<2;i++){
    for (j=0;j<2;j++){
    for (k=0;k<3;k++){
    printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
}
}
}
return 0;}
