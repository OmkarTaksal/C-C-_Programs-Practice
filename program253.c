#include<stdio.h>
#include<string.h>
int Count(const char *str)
{
    int iCount=0;

    while(*str !='\0')
    {
        if(*str =='a' || *str=='e' ||*str =='i' || *str=='o'||*str =='u')
        {
            iCount++;
        }
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

    iRet=Count(Arr);

    printf("Count Vowel is :%d\n",iRet);
    return 0;
}