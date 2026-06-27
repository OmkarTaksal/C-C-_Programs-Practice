
#include<stdio.h>

float AddTwoNumbers(
                    float fNo1,        //First Input
                    float fNo2         //Secound Input
                    )
{
    float fAns = 0.0f;                 //veriable to Store Result

    fAns = fNo1 + fNo2;                //To Store the Result
    return fAns;
}
int main()
{
    float fVolume1 = 0.0f;             //To Store first input
    float fVolume2 = 0.0f;             //To Store secound input
    float fResult = 0.0f;              //To Display Result      

    printf("Enter first Number as No1 \n");
    scanf("%f",&fVolume1);
    printf("Enter secound Number as No2 \n");
    scanf("%f",&fVolume2);
    
    fResult= AddTwoNumbers(fVolume1, fVolume2);       

    printf("Addition is : %f\n",fResult);
    return 0;

}