#include<stdio.h>
#include<string.h>
int StrLenX(const char *str)
{
    int iCount=0;

    while(*str !='\0')
    {
        iCount++;
        str++;
    }
    return iCount;

}




int main()
{
    char Arr[50]={'\0'};
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);  

    iRet=StrLenX(Arr);

    printf("String length is :%d\n",iRet);
    return 0;
}