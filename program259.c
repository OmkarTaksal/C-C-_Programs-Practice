#include<stdio.h>
#include<string.h>
void Update(char *str)
{
    

    while(*str !='\0')
    {
        if(*str =='l')
        {
            *str ='L';
        }
        str++;
    }

}




int main()
{
    char Arr[50]={'\0'};
    

    printf("Enter string :\n");
    scanf("%[^'\n]s",Arr);  

    Update(Arr);

    printf("Updateis :%s\n",Arr);
    return 0;
}