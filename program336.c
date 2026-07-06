#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
    //Position : 4
    UINT iMask=0xFFFFFFF7;
    UINT iResult=0;
    if(iPos<1 || iPos>32)
    {
        printf("Invalid Bit Position\n");
        return iNo;
    }
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

    iRet=OffBit(iValue,iLocation);
    printf("Updated Number : %d\n",iRet);


    return 0;
}