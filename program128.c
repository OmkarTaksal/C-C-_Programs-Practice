#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      if(Arr[iCnt]==11)                // BAD Programming.
      {
        return true;
      }
    }
    return false;

}
int main()
{
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    int bRet=false;

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
    bRet=LinearSearch(Brr,iLength);
    if(bRet==true)
    {
        printf("Element is Present ");
    }
    else
    {
        printf("Element is not Present ");
    }


    //Step5: Deallocate the memory. 
    free(Brr);

    return 0;
}

