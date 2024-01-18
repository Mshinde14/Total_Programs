#include<stdio.h>

double SqFeetToSqMeter(float fNo)
{
    long double dAns = 0;

    dAns = (double)fNo * 0.0929;

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Area : ");
    scanf("%f",&fValue);

    dRet = SqFeetToSqMeter(fValue);

    printf("Area into square feet : %lf",dRet);

    return 0;
}