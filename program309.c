#include<stdio.h>

int main()
{

    unsigned int iNo=0;
    unsigned int iMask=4;
    unsigned int iAns=0;

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