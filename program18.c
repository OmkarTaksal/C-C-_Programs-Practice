#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
    if(iAge >=0 && iAge <=5)
    {
         return 0;
    }
    else if(iAge >=6 && iAge <=18)
    {
        return 500;    
    }
    else if(iAge >=19 && iAge <=50)
    {
        return 900;    
    }
    else
    {
        return 400;
    }
}
int main()
{
    int iValue =0;
    int iRate=0;


    printf("Enter your Age to calculate ticket price\n");
    scanf("%d",&iValue);

    iRate = CalculateTicketPrice(iValue);
    printf("your taicket Price is %d Rupees",iRate);
    
    return 0;
}