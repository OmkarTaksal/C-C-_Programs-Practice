#include<stdio.h>
#include<string.h>


void StrLenX(char *str)
{
    *str='A';

}




int main()
{
    char Arr[50]={'\0'};
    int iRet=0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);  

    StrLenX(Arr);

    printf("String length is :%s\n",Arr);
    return 0;
}