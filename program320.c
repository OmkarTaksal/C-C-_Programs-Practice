#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask=0x1;
    int iCnt=0;

    for(iCnt=1;iCnt<=100;iCnt++)
    {
        printf("%d\t%x\n",iCnt,iCnt);
    }

    return 0;
}