#include<stdio.h>
#define PI 3.14

double CircleArea(float fNo)
{
    double dAns = 0.0;

    dAns = PI * fNo * fNo;

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}