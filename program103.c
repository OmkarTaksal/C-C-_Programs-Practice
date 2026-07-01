#include<stdio.h>

void CallValue(int *iPtr)
{
    (*iPtr)++;



}

int main()
{
    int iValue=11;

    CallValue(&iValue);
    printf("Value after call :%d\n",iValue);

    return 0;

}