#include<stdio.h>

typedef unsigned int UINT;

int main()
{

    UINT iNo=0;
    UINT iMask=0x40;
    UINT iAns=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNo);

    iAns=iNo&iMask;
    
    if(iAns==iMask)
    {
        printf("7th Bit is On");
    }
    else
    {
        printf("7th Bit is Off");
    }


    return 0;
}