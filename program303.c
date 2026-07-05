#include<stdio.h>

int main()
{
    int No=0;
    int iNo=0;
    int iDigit=0;

    printf("Enter the Number: \n");
    scanf("%d",&No);

    while(iNo!=0)
    {
        iDigit=iNo%2;
        printf("%d",iDigit);
        iNo=iNo/2;
    }
    printf("\n");
    


    return 0;
}