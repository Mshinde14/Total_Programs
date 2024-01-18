#include<stdio.h>

int KMtoMeter(int iKm)
{
    int iMeter= 0;

    iMeter = iKm * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Value in Meter is : %d",iRet);

    return 0;
}
