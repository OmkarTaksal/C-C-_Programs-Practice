#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iLength)
{
    iLength=0;
    iSum=0;
    iCnt=0;

    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;

}

int main()
{
    int iSize=0;
    int Brr=NULL;    int iRet=0; int iCnt=0;

    printf("Enter the Number of element :");
    scanf("%d",&iSize);

    Brr=(int *)malloc(sizeof(int)*iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet=Summation(Brr,iSize);
    return 0;
}
