#include<stdio.h>
#include<stdlib.h>
int SumOfEven(int Arr[], int iSize)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSum=iSum+Arr[iCnt];
        }
    }
    return iSum;

}
int main()
{
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    int iRet=0;

    //Step 1: Accept the number of elements.
    printf("Enter the number of Element :\n");
    scanf("%d",&iLength);

    //Step 2: Allocate the memory.
    Brr=(int *)malloc(iLength* sizeof(int));

    //Step 3: Accept the Values from user.
    printf("Enter the Element :\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step4: Use the memory.
    iRet=SumOfEven(Brr,iLength);
    printf("Even Elements addition are: %d\n",iRet);


    //Step5: Deallocate the memory. 
    free(Brr);

    return 0;
}

