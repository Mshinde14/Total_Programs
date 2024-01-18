#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo1 == 0)
    {
        return 0;
    }
    float fAns = 0.0f;

    fAns = ((float)iNo2 / (float)iNo1) *100;

    return fAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks : ");
    scanf("%d",&iValue1);
    printf("Enter Obtianed Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1 , iValue2);

    printf("Percentage is : %f",fRet);

    return 0;
}