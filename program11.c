/*
START 
    ACCEPT NUMBER as NO.
    IF NO is completely devisible by 2
         then print Even
    otherwise
        print Odd 
STOP

START
    ACCEPT Number as NO.
    DivideNo by 2
    if reminder is 0
        print as Even
    otherwise
        print as Odd
STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2; 
    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}