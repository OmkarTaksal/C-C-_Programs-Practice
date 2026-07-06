#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    //Position : 3 & 8

    UINT iMask=0x00000084;
    UINT iNo=0;
    UINT iResult=0;

    printf("Enter Number :\n");
    scanf("%d",&iNo);

    iResult=iNo^iMask;
    printf("Updated number : %d\n",iResult);

    return 0;
}