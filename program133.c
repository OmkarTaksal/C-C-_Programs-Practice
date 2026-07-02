#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize,int iNo )
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      if(Arr[iCnt]==iNo)
      {
        break;
      }
    }
    if(iCnt==iSize)
    {
        return false;
    }
    else 
    {
        return true;
    }

}
int main()
{
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0; int iValue=0;
    bool bRet=false;

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

    printf("Enter the Element that you want to search :");
    scanf("%d",&iValue);

    //Step4: Use the memory.
    bRet=LinearSearch(Brr,iLength,iValue);
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

