/*
START
    ACCEPT FIRST NUMBER AS nO1
    ACCEPT SECOUND NUMBER AS NO1
    PERFORM ADITION OF NO1 & NO2
    DISPLAY THE RESULT
STOP
*/

#include<stdio.h>
int main()
{
    float i,j,k;
    printf("Enter first Number as No1 \n");
    scanf("%f",&i);
    printf("Enter secound Number as No2 \n");
    scanf("%f",&j);
    
    k=i+j;

    printf("Addition is : %f\n",k);
    return 0;

}