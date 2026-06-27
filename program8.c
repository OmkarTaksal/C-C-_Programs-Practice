
#include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0f;

    fAns = fNo1 + fNo2;
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
    
    fResult= AddTwoNumbers(fVolume1, fVolume2);       // Perform the Addition

    printf("Addition is : %f\n",fResult);
    return 0;

}