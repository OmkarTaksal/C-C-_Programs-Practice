#include<stdio.h>

int main()
{

    int iNo=0;
    int iMask=4;
    int iAns=0;

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