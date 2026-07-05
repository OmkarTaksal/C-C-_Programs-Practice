#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    //Largest value of Int
    UINT iMask=0XFFFFFFFF;
    printf("%u\t%Xx\n",iMask,iMask);


    return 0;
}