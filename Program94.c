#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0;

    dCelsius = ((fTemp - 32) * (5.0 / 9.0));
    
    return dCelsius;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter temprature in farenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in celsius : %lf",dRet);

    return 0;
}
