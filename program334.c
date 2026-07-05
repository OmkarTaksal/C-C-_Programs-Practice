#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x1;
    UINT iResult=0;
    iMask=iMask<<(iPos-1);
    iResult=iNo^iMask;

    
}

int main()
{
    UINT iValue=0, iRet=0, iLocation=0;
 

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter the position of bit:\n");
    scanf("%d",&iLocation);

    iRet=ToggleBit(iValue,iLocation);
    printf("Updated Number : %d\n",iRet);


    return 0;
}