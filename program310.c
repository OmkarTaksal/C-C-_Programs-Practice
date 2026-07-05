#include<stdio.h>

int main()
{

    unsigned iNo=0;
    unsigned iMask=4;
    unsigned iAns=0;

    printf("Enter the Number : \n");
    scanf("%d",&iNo);

    iAns=iNo&iMask;
    
    if(iAns==iMask)
    {
        printf("3rd Bit is On");
    }
    else
    {
        printf("3rd Bit is Off");
    }


    return 0;
}