#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    //position : 4
    UINT iNo=0;
    UINT iMask=0XFFFFFFF7; 
    UINT iPos=0;

    printf("Enter the Number\n");
    scanf("%d",&iNo);

    iNo=iNo&iMask;

    printf("Updated Number : %d\n",iNo);


    return 0;
}