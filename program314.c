
#include<stdio.h>

typedef unsigned int UINT;

int main()
{

    UINT iNo=0;
    UINT iMask=0x10000;
    UINT iAns=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNo);

    iAns=iNo&iMask;
    
    if(iAns==iMask)
    {
        printf("17th Bit is On");
    }
    else
    {
        printf("17th Bit is Off");
    }


    return 0;
}